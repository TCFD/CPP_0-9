/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/12/08 15:18:27 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Brain*	Animal::getBrain(void) const {
	std::cout << "Animal objs got no brain" << std::endl;
	return (NULL);
}

Animal::Animal() {
	type = "prout";
	std::cout << PURPLE << "Animal constructor called" << NC << std::endl;
}

Animal::~Animal() {
	std::cout << RED << "Animal destructor called" << NC << std::endl;
}

Animal::Animal(const Animal &src) : type(src.type) {
	std::cout << PURPLE << "Animal copy constructor called" << NC << std::endl;
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