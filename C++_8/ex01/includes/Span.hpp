/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:22:40 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/12 17:18:12 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <time.h>
#include <limits.h>

class Span {
	private:
		unsigned			maxSize;
		std::vector<int>	vec;
	public:
		Span();
		Span(unsigned);
		~Span();
		Span(const Span &obj);
		Span& operator=(const Span& obj);
		void addNumber(int value);
		int shortestSpan();
		int longestSpan();
		void	fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	printSpan();
};