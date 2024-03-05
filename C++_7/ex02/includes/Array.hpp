/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:36:04 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/05 13:54:25 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<class T>
class Array {
	private:
		T		*tab;
		unsigned	a_size;
	public:
		Array(Array const &src);
		Array(unsigned n);
		Array(void);
		Array & operator=(const Array &src);
		T& operator[](unsigned index);
		const T& operator[](unsigned index) const ;
		unsigned	size();
};

#include "../src/Array.tpp"