/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/15 15:32:15 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	FragTrap	obj("obj");
	FragTrap	other_obj("other_obj");

	obj.attack("other_obj");
	other_obj.takeDamage(30);
	obj.attack("other_obj");
	other_obj.takeDamage(30);
	obj.attack("other_obj");
	other_obj.takeDamage(30);
	obj.attack("other_obj");
	other_obj.takeDamage(30);
	obj.attack("other_obj");
	other_obj.takeDamage(30);

	other_obj.beRepaired(50);
	other_obj.attack("obj");
	obj.takeDamage(30);
	std::cout << "hp : "<< other_obj.getHitPoints() << std::endl;
	obj.hightFiveGuys();
}