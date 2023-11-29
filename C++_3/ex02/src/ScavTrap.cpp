/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:13:01 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:41:08 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called for " << this->name << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) {
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	this->name = other.name;
	return (*this);
}

void	ScavTrap::printMessage() {
	std::cout << RED << "ScavTrap " << name << " has no "; 
	
	if (!energyPoints && !hitPoints)
		std::cout <<  "energy and no hitPoints...";
	else if (!energyPoints)
		std::cout << "energy...";
	else
		std::cout << "hitPoints...";
	std::cout << " He must rest." << NC << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (!energyPoints || !hitPoints) {
		printMessage();
		return ;
	}
	energyPoints -= 1;
	std::cout << GREEN << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << NC << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " has enterred in Gate keeper mode." << std::endl;
}