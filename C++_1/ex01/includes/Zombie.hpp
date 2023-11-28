/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:27:10 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/28 12:17:49 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie		();
		~Zombie		();
		void 		announce( void );
		void		AddName(std::string name);
};

Zombie	*zombieHorde( int N, std::string name );