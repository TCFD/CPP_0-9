/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:46:26 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/21 05:24:22 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <stdlib.h>

class ScalarConverter {
	private :
		ScalarConverter() {};
		ScalarConverter(const ScalarConverter &cpy) {(void)(cpy);};
	public :	
        ScalarConverter& operator=(const ScalarConverter& other) {(void)(other);return *this;};
		~ScalarConverter() {};
		static void convert(std::string original);
};
