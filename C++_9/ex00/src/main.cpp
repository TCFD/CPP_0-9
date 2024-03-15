/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:19:13 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/14 16:23:15 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

std::map<std::string, float>	storeInput(const char *path) {
	std::string						line;
	std::ifstream					inputFile(path);
	std::map<std::string, float>	mappedFile;

	if (!inputFile.is_open())
		throw std::runtime_error("Database file problem");
	while (getline(inputFile, line))
		mappedFile[line.substr(0, line.find(','))] = atof(line.substr(line.find(',') + 1, line.length()).c_str());
	return mappedFile;
}

int main(int argc, char **argv) {
	(void)(argv);
	if (argc != 2) {
		std::cout << "Invalid args" << std::endl;
		return 0;
	}
	std::map<std::string, float>	mappedFile;
	try	{mappedFile = storeInput("data.csv");}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
}