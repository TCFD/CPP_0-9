/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:46:26 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/22 16:30:52 by zbp15            ###   ########.fr       */
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
		static void convert(std::string original);
};