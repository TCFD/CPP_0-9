/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:22:20 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/13 11:32:07 by zbp15            ###   ########.fr       */
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
	srand(time(NULL));

	try {
		std::cout << CYAN << "Subject test :" << NC << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printSpan();
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	try {
		std::cout << CYAN << "Random span (lenght 10) :" << NC << std::endl;
		Span sp = Span(10);
		std::vector<int> vec = randomVec(10, -10, 10);
		
		sp.fillSpan(vec.begin(), vec.end());
		sp.printSpan();
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	try {
		std::cout << CYAN << "Empty Span :" << NC << std::endl;
		Span sp = Span(5);
		sp.printSpan();
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	try {
		std::cout << CYAN << "Random span (lenght 20000) :" << NC << std::endl;
		Span sp = Span(20000);
		std::vector<int> vec = randomVec(20000, -20000, 20000);
		
		sp.fillSpan(vec.begin(), vec.end());
		// sp.printSpan();
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
}