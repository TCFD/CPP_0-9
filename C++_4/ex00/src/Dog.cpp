/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:40:09 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << GREEN << "Dog constructor called" << NC << std::endl;
}

Dog::~Dog() {
	std::cout << RED << "Dog destructor called" << NC << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << GREEN << "Dog copy constructor called" << NC << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

/* std::string Dog::getType() const {
	return (this->type);
}
 */
void	Dog::makeSound() const {
	std::cout << "Wouf Wouf" << std::endl;
}