/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:41:06 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/22 17:25:44 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

void	printData(Data* dataPtr)
{
	std::cout << "array: ";
	for (int i = 0; i < 10; i++) {
		std::cout << dataPtr->tab[i];	
	}
	std::cout << std::endl;
	std::cout << "lenght: " << dataPtr->lenght << std::endl << std::endl;
}

int main(void) 
{
	Data*		dataPtr = new Data();
	uintptr_t	serializeData;
	Data*		deserializeData;

	dataPtr->lenght = 10;
	dataPtr->tab = new int[dataPtr->lenght];
	for (int i = 0; i < dataPtr->lenght; i++) {
		dataPtr->tab[i] = (dataPtr->lenght - 1) - i;	
	}

	serializeData = Serializer::serialize(dataPtr);
	deserializeData = Serializer::deserialize(serializeData);
	
	std::cout << "original\t\t: "<< dataPtr << std::endl;
	printData(dataPtr);

	std::cout << "Deserialized Data\t: "<< deserializeData << std::endl;
	printData(deserializeData);
	delete dataPtr;
}
