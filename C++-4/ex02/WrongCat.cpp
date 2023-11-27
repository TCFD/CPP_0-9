/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/17 16:34:44 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << GREEN << "WrongCat constructor called" << NC << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << RED << "WrongCat destructor called" << NC << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src), type(src.type) {
	std::cout << GREEN << "WrongCat copy constructor called" << NC << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string WrongCat::getType() const {
	return (this->type);
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat makeSound" << std::endl;
}
