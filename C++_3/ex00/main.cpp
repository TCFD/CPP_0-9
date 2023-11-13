/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/13 15:56:10 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	obj("obj");
	ClapTrap	other_obj("other_obj");

	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);
	obj.attack("other_obj");
	other_obj.takeDamage(0);

	other_obj.beRepaired(2);
	std::cout << "hp : "<< other_obj.getHitPoints() << std::endl;	
}