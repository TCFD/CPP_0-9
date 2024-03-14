/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:22:40 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/13 11:27:25 by zbp15            ###   ########.fr       */
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

# define NC					"\e[0m"
# define BOLD					"\e[1m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

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