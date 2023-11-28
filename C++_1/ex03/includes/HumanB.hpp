/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:06:44 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/28 18:04:34 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon		*weapon;
	public:
		HumanB	(std::string ToBeName);
		~HumanB	();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif