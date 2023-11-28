/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:33:54 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/28 18:01:47 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	std::string command;
	Harl		harl;	
	
	while (1){
		std::cout << "So, what do you want harl to complain about ? (EXIT to exit)" << std::endl;
		if (!std::getline(std::cin, command)) {exit(0);}
		if (std::cin.eof() || command == "EXIT" || command == "")
			break;
		harl.complain(command);
	}
	
	return 0;
}