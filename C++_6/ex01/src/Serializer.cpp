/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:48:50 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/22 17:05:52 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast <uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return	reinterpret_cast <Data *>(raw);
}

Serializer::Serializer() {}
Serializer::Serializer(const Serializer &cpy) {(void)cpy;}
Serializer::~Serializer() {}
Serializer& Serializer::operator=(const Serializer& other) {(void)other; return *this;}
