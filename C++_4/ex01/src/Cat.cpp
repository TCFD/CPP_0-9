/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:40:33 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Brain* Cat::getBrain() const {
	return this->brain;
}

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << GREEN << "Cat constructor called" << NC << std::endl;
}

Cat::~Cat() {
	std::cout << RED << "Cat destructor called" << NC << std::endl;
	if (this->brain) {
		delete this->brain;
		this->brain = NULL;
	}}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << GREEN << "Cat copy constructor called" << NC << std::endl;
	if (src.brain)
		this->brain = new Brain(*src.brain);
	this->type = src.type;
}

Cat &Cat::operator=(const Cat &src) {
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

/* std::string Cat::getType() const {
	return (this->type);
}
 */
void	Cat::makeSound() const {
	std::cout << "Miaou miaou" << std::endl;
}
