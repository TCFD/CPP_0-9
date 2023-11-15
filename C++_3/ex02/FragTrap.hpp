/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:00:39 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/15 15:16:28 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		FragTrap(std::string name);
		FragTrap();
		FragTrap(const FragTrap &ClapTrap);
		~FragTrap();

		FragTrap &operator=(const FragTrap &other);

		void	attack(const std::string& target);
		void	printMessage();
		void	hightFiveGuys();
};

#endif