/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:22:20 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/12 17:25:31 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

std::vector<int> randomVec(int size, int startOfRange, int endOfRange) {
	std::vector<int> vec;
	
	vec.resize(size);
	int range = endOfRange - startOfRange + 1;
    for (int i = 0; i < size; ++i) {
        vec[i] = rand() % range + startOfRange;
    }
	return vec;
}

int	main(void) {
	Span sp = Span(50);
	srand(time(NULL));
/*

		NEED TO INCLUDE MORE TESTS
*/



	std::vector<int> vec = randomVec(50, -50000, 50000);
	sp.fillSpan(vec.begin(), vec.end());
	std::cout << "longest = " << sp.longestSpan() << std::endl;
	std::cout << "shortest = " << sp.shortestSpan() << std::endl;
	sp.printSpan();
}