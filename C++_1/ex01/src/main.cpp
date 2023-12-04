/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:30:41 by rciaze            #+#    #+#             */
/*   Updated: 2023/12/01 14:36:41 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void) {
	Zombie	*horde = zombieHorde(10, "test");

	if (horde != NULL) {
		for (int i = 0; i < 10; i++){
			std::cout << "Nb " << i << ": ";
			horde[i].announce();
		}
		delete[] horde;
	}
	return (0);
}