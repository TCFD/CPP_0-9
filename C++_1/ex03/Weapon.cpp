/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:50:02 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/13 09:59:23 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string FristType) : type(FristType){
}

Weapon::~Weapon() {
}

const std::string	Weapon::getType(void){
	
	return (this->type);
}

void				Weapon::setType(std::string NewType){
	this->type = NewType;
}
