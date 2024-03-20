/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:02:51 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/20 14:28:57 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main() {
/*  	int a = 5;
	int b = 2;

	std::cout << BOLD << RED << "\tTesting with ints" << NC << std::endl; 
	::test(a, b, 'a', 'b');

	float c = 0.3;
	float d = 4.2;
	std::cout << BOLD << RED << "\tTesting with floats" << NC << std::endl; 
	::test(c, d, 'c', 'd');

	
	std::string e = "i'm e";
	std::string f = "i'm f";
	std::cout << BOLD << RED << "\tTesting with strings" << NC << std::endl; 
	::test(e, f, 'e', 'f'); */
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}