/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:51:22 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:41:07 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
	std::cout << "ClapTrap constructor called for " << name << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ClapTrap) {
	this->name = ClapTrap.name;
	this->hitPoints = ClapTrap.hitPoints;
	this->energyPoints = ClapTrap.energyPoints;
	this->attackDamage = ClapTrap.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for " << name << std::endl;
}

int ClapTrap::getHitPoints() const {
	return (hitPoints);
}

void	ClapTrap::printMessage() {
	std::cout << RED << "ClapTrap " << name << " has no "; 
	
	if (!energyPoints && !hitPoints)
		std::cout <<  "energy and no hitPoints...";
	else if (!energyPoints)
		std::cout << "energy...";
	else
		std::cout << "hitPoints...";
	std::cout << " He must rest." << NC << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (!energyPoints || !hitPoints) {
		printMessage();
		return ;
	}
	energyPoints -= 1;
	std::cout << GREEN << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << NC << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((hitPoints - (int)amount) < 0) {
		std::cout << RED << "Hey ! hitPoints can't be negative. You're trying to inflict " << amount << " points of damage to \"" << name << "\" but he has only " << hitPoints << " hitPoints." << NC <<std::endl;
		return ;
	}
	std::cout << CYAN << "ClapTrap " << name << " takes " << amount << " points of damage!" << NC << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0) {
		if (hitPoints > 0)
			hitPoints = 0;
		std::cout << RED << "ClapTrap " << name << " is dead..." << NC << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints > 0) {
		energyPoints -= 1;std::cout << PURPLE << "ClapTrap " << name << " heals by " << amount << NC << std::endl;
		hitPoints += amount;
		energyPoints -= 1;
		return ;
	}
	std::cout << RED << "ClapTrap " << name << " has no energy... He must rest." << NC << std::endl;
}