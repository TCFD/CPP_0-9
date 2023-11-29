/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:06:13 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:40:01 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << GREEN << "Cat constructor called" << NC << std::endl;
}

Cat::~Cat() {
	std::cout << RED << "Cat destructor called" << NC << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << GREEN << "Cat copy constructor called" << NC << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

/* std::string Cat::getType() const {
	return (this->type);
}
 */
void	Cat::makeSound() const {
	std::cout << "Miaou miaou" << std::endl;
}
