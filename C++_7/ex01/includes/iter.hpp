/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:03:44 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/05 12:11:35 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void iter(T *array, size_t lenght, void func(T &elmt)) {
	for (size_t i = 0; i < lenght; i++) {
			func(array[i]);
	}
}

template<typename T>
void print(T *array, unsigned lenght) {
	for (size_t i = 0; i < lenght; i++) {
		std::cout << "element " << i << " = " <<  array[i] << std::endl ;
	}
}

template<typename T>
void increment(T &elmt) {
	elmt += 1.0;
	// elmt++;
}