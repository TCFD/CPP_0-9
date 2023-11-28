/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:56:18 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/28 18:12:34 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() {
	std::cout << RED << "Default constructor called" << NC << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << GREEN << "Copy constructor called" << NC << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
}

Fixed::~Fixed() {
	std::cout << CYAN << "Destructor called" << NC << std::endl;
}

int	Fixed::getRawBits(void) const {
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout << PURPLE << "Assignation operator called" << NC << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}