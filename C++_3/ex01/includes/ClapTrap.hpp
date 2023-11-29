/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:48:17 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/13 16:05:24 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

class ClapTrap {
	protected :
		std::string name;
		int 		hitPoints;
		int 		energyPoints;
		int 		attackDamage;
		void 		printMessage();
	public :
		ClapTrap(std::string name);
		ClapTrap();
		ClapTrap(const ClapTrap &ClapTrap);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &ClapTrap);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHitPoints() const;
};
	

#endif