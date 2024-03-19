/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:10:06 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/19 18:53:54 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

void	BitcoinExchange::storeData(const char *path) {
	std::string						line;
	std::ifstream					inputFile(path);

	if (!inputFile.is_open())
		throw std::runtime_error("Database file problem");
	while (getline(inputFile, line))
		data[line.substr(0, line.find(','))] = atof(line.substr(line.find(',') + 1, line.length()).c_str());
}

bool	BitcoinExchange::isDateFormatGood(std::string date) {
	std::string subline = date.substr(0, date.find(' '));
	int i = 0;
	for (; subline[i]; i++) {
		if (i != 4 && i != 7 && !isdigit(subline[i])) 
			return false;
	}
	if (i == 10)
		return true ;
	return false;
}

void	BitcoinExchange::interpretInput(const char *path) {
	std::string		line;
	std::ifstream	inputFile(path);
	int				year, month, day;
	char			firstSeparator, secondSeparator, firstSpace, pipe, secondSpace;
	char			str[4096];
	float			value;

	if (!inputFile.is_open())
		throw std::runtime_error("Input file problem");
	if (!getline(inputFile, line) || line.compare("date | value") != 0)
		throw std::runtime_error("Input file problem");
	while (getline(inputFile, line)) {
		
		int matched = sscanf(line.c_str(), "%4d%c%2d%c%2d%c%c%c%f%s", &year, &firstSeparator,
																	  &month, &secondSeparator,
																	  &day, &firstSpace, &pipe,
																	  &secondSpace, &value, str);
		if (matched == 9  && firstSeparator == '-' && secondSeparator == '-'
						  && firstSpace == ' ' && pipe == '|'
						  && secondSpace == ' ' && isDateFormatGood(line))
		{
			std::time_t currentTime = std::time(0);
			std::tm* localTime = std::localtime(&currentTime);
			int current_year = 1900 + localTime->tm_year;
			int current_month = 1 + localTime->tm_mon;
			int current_day = localTime->tm_mday;
			if (year < 2009 || month > 12 || day > 31 || month < 1 || day < 1
							|| (year == 2009 && month == 1 && day < 2)
							|| (year % 4 && month == 2 && day > 28)
							|| (day > 30 && (month == 2 || month == 4 || month == 6 || month == 8 || month == 10 || month == 12)))
				std::cout << "Error : invalid date." << std::endl;
			else if (year > current_year || (year == current_year && month > current_month) || (year == current_year && month == current_month && day > current_day))
				std::cout << "Error : date is in the future" << std::endl;
			else if (value < 0)
				std::cout << "Error : value is negative" << std::endl;
			else if (value > 1000)
				std::cout << "Error : value is too big." << std::endl;
			else
			{
				std::map<std::string, float>::iterator lineInData = data.upper_bound(line.substr(0, line.find(' ')));
				lineInData--;
				std::cout << "for date = " << line.substr(0, line.find(' ')) << " and " << value << " = " << lineInData->second << " * " << value << " = " << lineInData->second * value << std::endl;
			}
		}
		else
			std::cout << "Error : bad input --> " << line << std::endl;
	}
	
}