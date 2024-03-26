/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:46:56 by rciaze            #+#    #+#             */
/*   Updated: 2024/03/26 15:21:03 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 3)
		std::cout << "Not enough args" << std::endl;

	std::vector<int> input;
	for (int i = 1; i < argc; i++)
		input.push_back(std::atoi(argv[i]));

	PmergeMe	merge(input);
	if (argc > 100)
		merge.moreThanHundred();

	clock_t startVec, endVec;
	startVec = clock();
	merge.CallVecAlgorithm();
	endVec = clock();
	long microsVec = endVec-startVec;

	clock_t startDeq, endDeq;
	startDeq = clock();
	merge.CallDeqAlgorithm();
	endDeq = clock();
	long microsDeq = endDeq - startDeq;
		
	merge.Print(input);
	
	std::cout << "Vector : " << microsVec << " microseconds" << std::endl;
	std::cout << "Deque : " << microsDeq << " microseconds" << std::endl;
	return 0;
}
