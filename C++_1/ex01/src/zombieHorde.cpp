/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:40:26 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/28 12:06:17 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N ; i++)
		horde[i].AddName(name);
	return (horde);
}