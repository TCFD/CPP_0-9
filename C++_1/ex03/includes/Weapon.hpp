/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:39:31 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/28 12:21:56 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
	#define WEAPON_HPP

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string FristType);
		~Weapon();
		const std::string&	getType(void);
		void				setType(std::string NewType);
};

#endif