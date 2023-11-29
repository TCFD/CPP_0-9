/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:01:26 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:40:34 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

void Brain::printIdeas(void) {
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
}

std::string* Brain::getIdeas(void) const {
	return (std::string*)ideas;
}

void Brain::setIdeas(std::string ideas) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas;
	counter = 0;
}

void Brain::setIdea(std::string idea) {
	this->ideas[counter] = idea;
	counter++;
	if (counter == 100)
		counter = 0;
}

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "No idea here";
	counter = 0;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &src) {
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return (*this);
}

