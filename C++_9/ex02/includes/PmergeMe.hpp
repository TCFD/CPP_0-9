/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:45:19 by rciaze            #+#    #+#             */
/*   Updated: 2024/03/26 15:24:28 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sys/time.h>
#include "vector"
#include "deque"
#include <algorithm>
#include "iostream"
#include <sys/time.h>

class PmergeMe {
	public :
		PmergeMe();
		PmergeMe(std::vector<int> input);
		~PmergeMe();
		PmergeMe(PmergeMe const &cpy);
		PmergeMe& operator=(const PmergeMe& obj);
		void				moreThanHundred();
		void	insertByBinarySearchVec(std::vector<int>& array, int value);
		void	fordJohnsonSortVec(std::vector<int> array, int start, int end);
		void	CallVecAlgorithm();
		void	insertByBinarySearchDeq(std::deque<int>& array, int value);
		void	fordJohnsonSortDeq(std::deque<int>& array, int start, int end);
		void	CallDeqAlgorithm();
		void	Print(std::vector<int> input);
	private :
		bool				printResults;
		std::deque<int> 	arrayDeq;
		std::vector<int>	arrayVec;
};