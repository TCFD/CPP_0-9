/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:56:28 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/28 18:19:18 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void ) {
	Fixed a(10);
	Fixed b( a );
	Fixed c(42.42f);
	Fixed d;

	d = a;
	std::cout << a << std::endl;
	std::cout << "a but float " << a.toFloat() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << "c but int " << c.toInt() << std::endl;
	std::cout << d << std::endl;
	return 0;
}