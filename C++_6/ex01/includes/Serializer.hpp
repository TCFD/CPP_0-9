/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:41:48 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/22 17:05:48 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

typedef struct Data {
	int *tab;
	int	lenght;
}	Data;


class Serializer
{
	private :
		Serializer();
		Serializer(const Serializer &cpy);
	public :	
        Serializer& operator=(const Serializer& other);
		~Serializer();
		static	uintptr_t serialize(Data* ptr);
		static	Data* deserialize(uintptr_t raw);
};
