/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:50:25 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/28 18:04:46 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		Weapon		&weapon;
		std::string name;
	public:
		HumanA	(std::string ToBeName, Weapon &ToBeWeapon);
		~HumanA	();
		void	attack(void);
};

#endif