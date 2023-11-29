/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:41:30 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

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