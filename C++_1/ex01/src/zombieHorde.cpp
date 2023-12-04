/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:40:26 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/30 17:33:47 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	if (N <= 0)
		return (NULL);

	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N ; i++)
		horde[i].AddName(name);
	return (horde);
}