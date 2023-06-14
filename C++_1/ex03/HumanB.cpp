/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:07:24 by rciaze            #+#    #+#             */
/*   Updated: 2023/06/01 15:42:57 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string ToBeName) {
	this->weapon = NULL;
	this->name = ToBeName;
}

HumanB::~HumanB() {
}

void	HumanB::attack(void){
	if (this->weapon == NULL){
		std::cout << this->name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}