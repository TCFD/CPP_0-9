/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:56:18 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/28 18:12:49 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() {
	std::cout << RED << "Default constructor called" << NC << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(int const n) {
	std::cout << RED << "Int constructor called" << NC << std::endl;
	this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(float const n) {
	std::cout << RED << "Float constructor called" << NC << std::endl;
	this->_fixedPointValue = roundf(n  * (1 << this->_fractionalBits));
}

float Fixed::toFloat(void) const {
	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int	Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_fractionalBits);
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
	std::cout << PURPLE << "Assignation operator = called" << NC << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}