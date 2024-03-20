/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:46:26 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/20 12:26:17 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <stdlib.h>

class ScalarConverter {
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);

	public :
        ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
		static bool	isInputAlright(std::string original);
		static int		detect(std::string original);
		static void	itsChar(std::string original);
		static void	itsInt(std::string original);
		static void	itsFloat(std::string original);
		static void	itsDouble(std::string original);
		static void convert(std::string original);
};
