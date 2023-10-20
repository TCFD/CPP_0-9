/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:01:00 by rciaze            #+#    #+#             */
/*   Updated: 2023/10/20 15:09:46 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

bool	check_letters(std::string str) {
	for (unsigned i = 0; i < str.length(); ++i) {
		if ((str.at(i) > 'z' || str.at(i) <'a') && (str.at(i) > 'Z' || str.at(i) < 'A'))
			return (false);
	}
	return (true);
}

bool	check_number(std::string str) {
	for (unsigned i = 0; i < str.length(); ++i) {
		if (str.at(i) < '0' || str.at(i) > '9')
			return (false);
	}
	return (true);
}

void	CtrlD(void){
	std::cout << BOLD << PURPLE << "Bye !" << NC << std::endl;
	exit(0);
}