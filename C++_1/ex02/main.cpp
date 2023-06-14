/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:30:41 by rciaze            #+#    #+#             */
/*   Updated: 2023/05/31 16:08:30 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "Adress of str               = " << &str << std::endl;
	std::cout << "Adress pointed by stringPTR = " << stringPTR << std::endl;
	std::cout << "Adress in stringREF         = " << &stringREF << std::endl << std::endl;
	
	std::cout << "str                         = " << str << std::endl;
	std::cout << "stringPTR                   = " << *stringPTR << std::endl;
	std::cout << "stringREF                   = " << stringREF << std::endl;
}