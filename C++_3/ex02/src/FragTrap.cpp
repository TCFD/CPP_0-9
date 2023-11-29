/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:13:01 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:41:14 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called for " << this->name << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other) {
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	this->name = other.name;
	return (*this);
}

void	FragTrap::printMessage() {
	std::cout << RED << "FragTrap " << name << " has no "; 
	
	if (!energyPoints && !hitPoints)
		std::cout <<  "energy and no hitPoints...";
	else if (!energyPoints)
		std::cout << "energy...";
	else
		std::cout << "hitPoints...";
	std::cout << " He must rest." << NC << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (!energyPoints || !hitPoints) {
		printMessage();
		return ;
	}
	energyPoints -= 1;
	std::cout << GREEN << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << NC << std::endl;
}

void FragTrap::hightFiveGuys() {
	std::string str;
	
	while (1) {
		std::cout << PURPLE <<"FragTrap " << name << " want to high-five you.\nWhat will you say ? (y/n)" << NC << std::endl;
		getline(std::cin, str);
		if (!str.compare("y") || !str.compare("Y")) {
			std::cout << name << " is so happy ! Thanks !!" << std::endl;
			break ;
		}
		else if (!str.compare("n") || !str.compare("N")) {
			std::cout<< name << " is sad... :(" << std::endl;
			break ;
		}
		else if (std::cin.eof())
			return;
		else
			std::cout << "I don't understand..." << std::endl;
	}
}