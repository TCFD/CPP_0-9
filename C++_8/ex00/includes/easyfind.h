/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:30:56 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/11 16:14:40 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

# define NC					"\e[0m"
# define BOLD					"\e[1m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

template<typename T>
typename T::iterator	easyfind(T &container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	
	if (it == container.end())
		throw std::runtime_error("Number was not found inside the container.");
	return it;
}

template<typename T>
void testing(T &container, int i, std::string nameOfContainer) {
	typename T::iterator it;

	try {
		std::cout << PURPLE << "Searching " << i << " in " << nameOfContainer << "..." << std::endl;
		it = easyfind(container, i);
		std::cout << GREEN << "\t  " << i << " was found in your " << nameOfContainer << std::endl;
	}
	catch(std::exception &e) {
		std::cout << RED << "\t  " << i << " is not in your " << nameOfContainer << std::endl;
	}
	std::cout << NC << std::endl;
}
