/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:50:25 by rciaze            #+#    #+#             */
/*   Updated: 2023/06/01 14:43:00 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
