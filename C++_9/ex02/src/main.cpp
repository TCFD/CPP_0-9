/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rciaze <rciaze@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/19 18:14:54 by rciaze			#+#	#+#			 */
/*   Updated: 2024/03/19 18:25:40 by rciaze		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>

void insertByBinarySearchVec(std::vector<int>& array, int value) {
	std::vector<int>::iterator it = std::lower_bound(array.begin(), array.end(), value);
	array.insert(it, value);
}

void fordJohnsonSortVec(std::vector<int>& array, int start, int end) {
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

void insertByBinarySearchDeq(std::deque<int>& array, int value) {
	std::deque<int>::iterator it = std::lower_bound(array.begin(), array.end(), value);
	array.insert(it, value);
}

void fordJohnsonSortDeq(std::deque<int>& array, int start, int end) {
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

int main(int argc, char **argv) {
	if (argc < 3)
		std::cout << "Not enough args" << std::endl;

	bool printResults = false;
	if (argc > 100) {
		std::string answer;
		std::cout << "There is more than 100 elements. Would you like to see the sorted arrays ? (y/n) ";
		while (1) {
			std::cin >> answer;
			if (!answer.compare("n")) {
				printResults = false;
				break ;
			} else if (!answer.compare("y"))
				break ;
			else
				std::cout << "Sorry, i'm not sure i got that right..." << std::endl;
		}

	}
	std::vector<int> arrayVec;
	for (int i = 1; i < argc; i++)
		arrayVec.push_back(std::atoi(argv[i]));

	std::deque<int> arrayDeq;
	for (int i = 1; i < argc; i++)
		arrayDeq.push_back(std::atoi(argv[i]));

	clock_t startVec, endVec;
	startVec = clock();
	fordJohnsonSortVec(arrayVec, 0, arrayVec.size());
	endVec = clock();
	long microsVec = endVec-startVec;

	clock_t startDeq, endDeq;
	startDeq = clock();
	fordJohnsonSortDeq(arrayDeq, 0, arrayDeq.size());
	endDeq = clock();
	long microsDeq = endDeq - startDeq;
	
	if (printResults) {
		std::cout << "Vector : ";
		for (size_t i = 0; i < arrayVec.size(); ++i)
			std::cout << arrayVec[i] << " ";
		std::cout << std::endl;
			
		std::cout << "Deque : ";
		for (size_t i = 0; i < arrayDeq.size(); ++i)
			std::cout << arrayDeq[i] << " ";
		std::cout << std::endl;
	}
		
	std::cout << "Vector : " << microsVec << " microseconds" << std::endl;
	std::cout << "Deque : " << microsDeq << " microseconds" << std::endl;
	return 0;
}
