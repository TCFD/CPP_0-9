/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:55:17 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/03 16:39:57 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
# define NC					"\e[0m"
# define BOLD					"\e[1m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

template<typename T>
void	swap(T& a, T& b) {
	T	temp = a;
	
	a = b;
	b = temp;
}

template<typename T>
const T	&min(const T& a, const T& b) {
	if (a < b)
		return a;
	return b;
}

template<typename T>
const T	&max(const T& a, const T& b) {
	if (a > b)
		return a;
	return b;
}

template<typename T>
void test(T& a, T& b, char a_name, char b_name) {
	std::cout << NC << "\nfor " << a_name << " = " << a << " and " << b_name << " = " << b << NC << std::endl;
	std::cout << "{\n\t" << BOLD << PURPLE << "::min(" << a_name << ", " << b_name << ") = " << ::min(a, b) << std::endl;
	std::cout << "\t::max(" << a_name << ", " << b_name << ") = " << ::max(a, b) << std::endl;
	swap(a, b);
	std::cout << "\tAfter the swap, " << a_name << " = " << a << " and " << b_name << " = " << b << NC << "\n}" << std::endl << std::endl;
		
}