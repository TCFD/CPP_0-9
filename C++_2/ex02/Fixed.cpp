/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:56:18 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/13 09:36:16 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	//std::cout << RED << "Default constructor called" << NC << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(int const n) {
	//std::cout << RED << "Int constructor called" << NC << std::endl;
	this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(float const n) {
	//std::cout << RED << "Float constructor called" << NC << std::endl;
	this->_fixedPointValue = roundf(n  * (1 << this->_fractionalBits));
}

float Fixed::toFloat(void) const {
	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int	Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_fractionalBits);
}

Fixed::Fixed(const Fixed &fixed) {
	//std::cout << GREEN << "Copy constructor called" << NC << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
}

Fixed::~Fixed() {
	//std::cout << CYAN << "Destructor called" << NC << std::endl;
}

int	Fixed::getRawBits(void) const {
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

Fixed	&Fixed::operator=(const Fixed &fixed) {
	//std::cout << PURPLE << "Assignation operator = called" << NC << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator<(const Fixed &other){
	return (this->_fixedPointValue < other.getRawBits());			
}

bool	Fixed::operator>(const Fixed &other){
	return (this->_fixedPointValue > other.getRawBits());			
}

bool	Fixed::operator<=(const Fixed &other){
	return (this->_fixedPointValue <= other.getRawBits());			
}

bool	Fixed::operator>=(const Fixed &other){
	return (this->_fixedPointValue >= other.getRawBits());			
}

bool	Fixed::operator==(const Fixed &other){
	return (this->_fixedPointValue == other.getRawBits());			
}

bool	Fixed::operator!=(const Fixed &other){
	return (this->_fixedPointValue != other.getRawBits());			
}

Fixed	Fixed::operator+(const Fixed &other){
	Fixed result;
	
	result.setRawBits(this->_fixedPointValue + other.getRawBits());
	return (result);			
}

Fixed	Fixed::operator-(const Fixed &other){
	Fixed result;
	
	result.setRawBits(this->_fixedPointValue - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other){
	Fixed result;
	
	result.setRawBits((long)(this->_fixedPointValue * (long)other.getRawBits()) / (1 << this->_fractionalBits));
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other){
	Fixed result;
	
	result.setRawBits((long)this->_fixedPointValue * (1 << this->_fractionalBits) / other.getRawBits());
	return (result);
}

Fixed&	Fixed::operator++(){
	
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int){
	
	Fixed	return_value(*this);
	
	++(*this);
	return (return_value);
}

Fixed&	Fixed::operator--(){
	
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int){
	
	Fixed	return_value(*this);
	
	--(*this);
	return (return_value);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b){
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b){
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}