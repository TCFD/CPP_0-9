/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:22:37 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/13 11:01:43 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(void) : maxSize(0)
{
	return ;
}

Span::Span(unsigned int N) : maxSize(N)
{
	return ;
}

Span::Span(const Span& obj)
{
	*this = obj;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		this->maxSize = obj.maxSize;
		this->vec = obj.vec;
	}
	return (*this);
}

void	Span::addNumber(int value) {
	if (vec.size() == maxSize)
		throw std::runtime_error("Span is full.");
	vec.push_back(value);
}

int		Span::longestSpan() {
	if (vec.size() < 2)
		throw std::runtime_error("Not enought elements in the Span");

    std::vector<int>::iterator minIter = std::min_element(vec.begin(), vec.end());
    std::vector<int>::iterator maxIter = std::max_element(vec.begin(), vec.end());
	return (*maxIter - *minIter);
}

int		Span::shortestSpan() {
	if (vec.size() < 2)
		throw std::runtime_error("Not enought elements in the Span");

	std::set<int> s(vec.begin(), vec.end());
	std::set<int> s2;
	std::set<int>:: iterator it = s.begin();
	std::set<int>:: iterator it2 = it;
	it++;
	for(; it != s.end(); it++, it2++)
		s2.insert(*it - *it2);
	return *s2.begin();
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (vec.size() + (end - begin) > maxSize)
		throw std::runtime_error("No enought space in the Span.");

	
	for (; begin < end; begin++) {
		addNumber(*begin);
	}
}

void	Span::printSpan() {

   std::cout << "Span has " << vec.size() << " values" << std::endl;
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << "_";
        }
    }
    std::cout << std::endl;
}
