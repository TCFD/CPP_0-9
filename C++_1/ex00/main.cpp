/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:30:41 by rciaze            #+#    #+#             */
/*   Updated: 2023/05/31 15:37:24 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie	first("first");
	Zombie	*second = newZombie("second");

	first.announce();
	second->announce();
	randomChump("Chump one");
	delete (second);
	return (0);
}