/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:45:05 by rciaze            #+#    #+#             */
/*   Updated: 2024/03/26 15:24:40 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe() : printResults(true), arrayDeq(), arrayVec() {}

PmergeMe::PmergeMe(std::vector<int> input) : printResults(true), arrayDeq(input.begin(), input.end()), arrayVec(input) {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &cpy) : printResults(cpy.printResults), arrayDeq(cpy.arrayDeq), arrayVec(cpy.arrayVec) {
	
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
	printResults = obj.printResults;
	arrayDeq = obj.arrayDeq;
	arrayVec = obj.arrayVec;
	return *this;
}

void PmergeMe::moreThanHundred() {
	std::string answer;
	std::cout << "There is more than 100 elements. Would you like to see the sorted arrays ? (y/n) ";
	while (1 && !std::cin.eof()) {
		std::cin >> answer;
		if (!answer.compare("n")) {
			printResults = false;
			break ;
		} else if (!answer.compare("y"))
			break ;
		else
			std::cout << "Sorry, i'm not sure i got that right... Please, try again. (y/n)" << std::endl;
	}
}

void	PmergeMe::CallVecAlgorithm() {fordJohnsonSortVec(arrayVec, 0, arrayVec.size());}


void	PmergeMe::insertByBinarySearchVec(std::vector<int>& array, int value) {
	std::vector<int>::iterator it = std::lower_bound(array.begin(), array.end(), value);
	array.insert(it, value);
}

void PmergeMe::fordJohnsonSortVec(std::vector<int> array, int start, int end) {
	if (end == 1)
		return;

	std::vector<int> leftHalf, rightHalf;
	for (int i = start; i < end; i += 2) {
		if (i + 1 < end) {
			if (array[i] < array[i + 1]) {
				leftHalf.push_back(array[i]);
				rightHalf.push_back(array[i + 1]);
			} else {
				leftHalf.push_back(array[i + 1]);
				rightHalf.push_back(array[i]);
			}
		} else {
			leftHalf.push_back(array[i]);
		}
	}
		
	fordJohnsonSortVec(leftHalf, 0, leftHalf.size());

	std::vector<int> sortedArray;
	for (size_t i = 0; i < leftHalf.size(); ++i)
		sortedArray.push_back(leftHalf[i]);
	
	for (size_t i = 0; i < rightHalf.size(); ++i)
		insertByBinarySearchVec(sortedArray, rightHalf[i]);

	for (size_t i = 0; i < sortedArray.size(); ++i)
		array[start + i] = sortedArray[i];
}

void	PmergeMe::CallDeqAlgorithm() {fordJohnsonSortDeq(arrayDeq, 0, arrayDeq.size());}

void	PmergeMe::insertByBinarySearchDeq(std::deque<int>& array, int value) {
	std::deque<int>::iterator it = std::lower_bound(array.begin(), array.end(), value);
	array.insert(it, value);
}

void	PmergeMe::fordJohnsonSortDeq(std::deque<int>& array, int start, int end) {
	if (end == 1)
		return;

	std::deque<int> leftHalf, rightHalf;
	for (int i = start; i < end; i += 2) {
		if (i + 1 < end) {
			if (array[i] < array[i + 1]) {
				leftHalf.push_back(array[i]);
				rightHalf.push_back(array[i + 1]);
			} else {
				leftHalf.push_back(array[i + 1]);
				rightHalf.push_back(array[i]);
			}
		} else {
			leftHalf.push_back(array[i]);
		}
	}
		
	fordJohnsonSortDeq(leftHalf, 0, leftHalf.size());

	std::deque<int> sortedArray;
	for (size_t i = 0; i < leftHalf.size(); ++i)
		sortedArray.push_back(leftHalf[i]);
	
	for (size_t i = 0; i < rightHalf.size(); ++i)
		insertByBinarySearchDeq(sortedArray, rightHalf[i]);

	for (size_t i = 0; i < sortedArray.size(); ++i)
		array[start + i] = sortedArray[i];
}

void	PmergeMe::Print(std::vector<int> input) {
	if (printResults) {
		std::cout << "Before : ";
		for (size_t i = 0; i < arrayVec.size(); ++i)
			std::cout << input[i] << " ";
		std::cout << std::endl;
			
		std::cout << "After : ";
		for (size_t i = 0; i < arrayDeq.size(); ++i)
			std::cout << arrayDeq[i] << " ";
		std::cout << std::endl;
	}
}