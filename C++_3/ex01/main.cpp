/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/15 15:32:03 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	obj("obj");
	ScavTrap	other_obj("other_obj");

	obj.attack("other_obj");
	other_obj.takeDamage(20);
	obj.attack("other_obj");
	other_obj.takeDamage(20);
	obj.attack("other_obj");
	other_obj.takeDamage(20);
	obj.attack("other_obj");
	other_obj.takeDamage(20);
	obj.attack("other_obj");
	other_obj.takeDamage(20);

	other_obj.beRepaired(50);
	other_obj.attack("obj");
	obj.takeDamage(20);
	std::cout << "hp : "<< other_obj.getHitPoints() << std::endl;
	obj.guardGate();
}