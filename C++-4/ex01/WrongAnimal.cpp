/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/17 16:20:42 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << GREEN << "WrongAnimal constructor called" << NC << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "WrongAnimal destructor called" << NC << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type) {
	std::cout << GREEN << "WrongAnimal copy constructor called" << NC << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makeSound" << std::endl;
}