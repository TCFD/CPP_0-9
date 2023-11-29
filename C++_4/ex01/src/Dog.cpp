/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:40:31 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Brain* Dog::getBrain() const {
	return this->brain;
}

Dog::Dog() {
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << GREEN << "Dog constructor called" << NC << std::endl;
}

Dog::~Dog() {
	std::cout << RED << "Dog destructor called" << NC << std::endl;
	if (this->brain) {
		delete this->brain;
		this->brain = NULL;
	}
}

Dog::Dog(const Dog &src) : Animal(src), brain(NULL) {
	std::cout << GREEN << "Dog copy constructor called" << NC << std::endl;
	if (src.brain)
		this->brain = new Brain(*src.brain);
	this->type = src.type;
}

Dog &Dog::operator=(const Dog &src) {
	if (this != &src) {
		Animal::operator=(src);
		Brain *newBrain;
		if (src.brain)
			newBrain = new Brain(*src.brain);
		else
			newBrain = NULL;
		this->brain = newBrain;
	}
	return (*this);
}

/* std::string Dog::getType() const {
	return (this->type);
}
 */
void	Dog::makeSound() const {
	std::cout << "Wouf Wouf" << std::endl;
}