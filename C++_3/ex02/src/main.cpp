/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:41:10 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

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