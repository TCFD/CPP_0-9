/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:33:54 by rciaze            #+#    #+#             */
/*   Updated: 2023/06/02 16:53:43 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	std::string command;
	Harl		harl;	
	
	while (1){
		std::cout << "So, what do you want harl to complain about ? (EXIT to exit)" << std::endl;
		std::cin >> command;
		if (command == "EXIT" || command == "")
			break;
		harl.complain(command);
	}
	
	return 0;
}