/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:40:17 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Brain*	Animal::getBrain(void) const {
	std::cout << "Animal objs got no brain" << std::endl;
	return (NULL);
}

Animal::Animal() {
	type = "prout";
	std::cout << GREEN << "Animal constructor called" << NC << std::endl;
}

Animal::~Animal() {
	std::cout << RED << "Animal destructor called" << NC << std::endl;
}

Animal::Animal(const Animal &src) : type(src.type) {
	std::cout << GREEN << "Animal copy constructor called" << NC << std::endl;
}

Animal &Animal::operator=(const Animal &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << "Animal makeSound" << std::endl;
}