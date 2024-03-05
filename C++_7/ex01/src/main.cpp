/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:16:27 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/05 12:27:07 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int	main() {
	int a[4] = {1, 5, 3, 5};
	char b[6] = {'a', '8', '&', 'o', '/', 'z'};
	std::string c[2] = {"je suis la string 1", "et moi la string 2"};
	
	std::cout << "Int array before" << std::endl;
	print(a, 4);
	::iter(a, 4, increment);
	std::cout << std::endl << "Int array after" << std::endl;
	print(a, 4);
	
	std::cout << std::endl << std::endl << "char array before" << std::endl;
	print(b, 6);
	::iter(b, 6, increment);
	std::cout << std::endl << "char array after" << std::endl;
	print(b, 6);
	
	std::cout << std::endl << std::endl << "string array before" << std::endl;
	print(c, 2);
	::iter(c, 2, increment);
	std::cout << std::endl << "string array after" << std::endl;
	print(c, 2);	
}
