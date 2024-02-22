/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:46:24 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/22 16:38:02 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

bool	isInputAlright(std::string original) {
	if (original == "+inf" || original == "+inff") {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
		return 1;
	}
	if (original == "-inf" || original == "-inff") {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
		return 1;
	}
	if (original == "nanf" || original == "nan") {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		return 1;
	}
	for (int i = 1; original.c_str()[i]; i++) {
		if (!isdigit(original.c_str()[i])) {
			std::cout << "Hey, that input doesn't seems right..." << std::endl;
			return 1;
		}
	}
	return 0;
}

int detect(std::string original) {
	const char *str = original.c_str();
	if (!isdigit(str[0]) && isprint(str[0]) && !isdigit(str[1]))
		return 1;
	if (original.find('.') == std::string::npos)
		return 2;
	if (original.find('f') != std::string::npos)
		return 3;
	if (original.find('.') != std::string::npos)
		return (4);
	std::cout << "Unknown type." << std::endl;
	return (-1);
}

void	itsChar(std::string original) {
	char nb = original.c_str()[0];
	
	std::cout << "char : " << nb << std::endl;
	std::cout << "int : " << static_cast<int>(nb) << std::endl;
	std::cout << "float : " << static_cast<float>(nb) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << ".0" << std::endl;
}

void	itsInt(std::string original) {
	long int value = atol(original.c_str());
	
	if (static_cast<int>(value) != value)
	{
		std::cout << "char : overflow" << std::endl;
		std::cout << "int : overflow" << std::endl;
		std::cout << "float : overflow" << std::endl;
		std::cout << "double : overflow" << std::endl;
	}
	else
	{
		if (static_cast<int>(static_cast<char>(value)) != value || !isprint(value))
			std::cout << "char : non displayable" << std::endl;
		else
			std::cout << "char : " << static_cast<char>(value) << std::endl;
		std::cout << "int : " << static_cast<int>(value) << std::endl;
		std::cout << "float : " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(value) << ".0" << std::endl;
	}
		
}

void	itsFloat(std::string original) {
	float value = atof(original.c_str());

	if (static_cast<float>(static_cast<char>(value)) != value || !isprint(value))
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(value) << std::endl;

	if (static_cast<float>(static_cast<int>(value)) != value)
		std::cout << "int : non displayable" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(value) << std::endl;

	std::cout << "float : " << value;
	if (static_cast<int>(value) == value)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	
	std::cout << "double : " << static_cast<double>(value);
	if (static_cast<int>(value) == static_cast<double>(value))
		std::cout << ".0";
	std::cout << std::endl;
}

void	itsDouble(std::string original) {
	double value = strtod(original.c_str(), NULL);
	
	if (static_cast<double>(static_cast<char>(value)) != value || !isprint(value))
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(value) << std::endl;

	if (static_cast<double>(static_cast<int>(value)) != value)
		std::cout << "int : non displayable" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(value) << std::endl;

	std::cout << "float : " << value;
	if (static_cast<int>(value) == value)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	
	std::cout << "double : " << static_cast<double>(value);
	if (static_cast<int>(value) == static_cast<double>(value))
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::convert(std::string original) {
	
	if(isInputAlright(original))
		return ;

	switch (detect(original))
	{
		case 1:
		{
			itsChar(original);
			break;
		}
		case 2:
		{
			itsInt(original);
			break;
		}
		case 3:
		{
			itsFloat(original);
			break;
		}
		case 4:
		{
			itsDouble(original);
			break;
		}
		default:
			break;
	}
}

ScalarConverter::ScalarConverter() {};
ScalarConverter::ScalarConverter(const ScalarConverter &cpy) {(void)(cpy);};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {(void)(other);return *this;};
ScalarConverter::~ScalarConverter() {};
