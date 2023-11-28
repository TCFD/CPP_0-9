/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:56:28 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/28 18:20:28 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void ) {
	Fixed a (1234.4321f);
	Fixed b( 10 );
	Fixed c( 42.42f );
	Fixed d( 42 );

	std::cout << RED << "++ operator test" << NC << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "d++ = " << d++ << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "++b =  " << ++b << std::endl;
	std::cout << "b= " << b << std::endl;

	b = 10;
	d = 42;
	std::cout << RED << "-- operator test" << NC << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "d-- = " << d-- << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "--b =  " << --b << std::endl;
	std::cout << "b= " << b << std::endl;
	
	b = 10;
	d = 42;
	std::cout << RED << "+ operator test" << NC << std::endl;
	std::cout << "b = " << b << " d = " << d << std::endl;
	std::cout << "b + d = " << b + d << std::endl;

	b = 10;
	d = 42;
	std::cout << RED << "- operator test" << NC << std::endl;
	std::cout << "b = " << b << " d = " << d << std::endl;
	std::cout << "d - b = " << d - b << std::endl;

	b = 10;
	d = 42;
	std::cout << RED << "* operator test" << NC << std::endl;
	std::cout << "b = " << b << " d = " << d << std::endl;
	std::cout << "b * d = " << b * d << std::endl;

	b = 10;
	d = 42;
	std::cout << RED << "/ operator test" << NC << std::endl;
	std::cout << "b = " << b << " d = " << d << std::endl;
	std::cout << "d / b = " << d / b << std::endl;
	
	b = 10;
	d = 11;
	c = 10;
	std::cout << RED << "comparaison operator test" << NC << std::endl;
	std::cout << "b = " << b << " d = " << d << " c = " << c << std::endl;
	std::cout << "b > d = " << (bool)(b > d) << std::endl;
	std::cout << "b < d = " << (bool)(b < d) << std::endl;
	std::cout << "b >= d = " << (bool)(b >= d) << std::endl;
	std::cout << "b >= c = " << (bool)(b >= c) << std::endl;
	std::cout << "b <= d = " << (bool)(b <= d) << std::endl;
	std::cout << "b <= c = " << (bool)(b <= c) << std::endl;
	std::cout << "b == c = " << (bool)(b == c) << std::endl;
	std::cout << "b == d = " << (bool)(b == d) << std::endl;
	std::cout << "b != c = " << (bool)(b != c) << std::endl;
	std::cout << "b != d = " << (bool)(b != d) << std::endl;
	return 0;
}