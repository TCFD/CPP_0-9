/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 04:36:05 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/21 06:55:42 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

#include <math.h>

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Wrong use of the program." << std::endl;	
		return 0;
	}
	
	ScalarConverter::convert(argv[1]);
}