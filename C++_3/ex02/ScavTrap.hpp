/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:00:39 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/13 16:19:25 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARTRAP_H
# define SCARTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
		ScavTrap(std::string name);
		ScavTrap();
		ScavTrap(const ScavTrap &ClapTrap);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &other);

		void	attack(const std::string& target);
		void	printMessage();
		void	guardGate();
};

#endif