/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:32:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/23 14:42:20 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"



int main()
{
	Animal *a[100];

	int i = 0;
	for (; i < 50; ++i)
		a[i] = new Dog();
	for (; i < 100; ++i)
		a[i] = new Cat();

	a[0]->getBrain()->printIdeas();
	a[0]->getBrain()->setIdeas("LELELELE");
	a[0]->getBrain()->printIdeas();
	a[0]->getBrain()->setIdeas("BYE!");
	std::cout << "----------------------------------\n";
	a[0]->getBrain()->printIdeas();

	for (int j = 0; j < 100; ++j)
		delete a[j];

	Dog hey;
	{
		Dog tmp = hey;
	}
	hey.getBrain()->printIdeas();
	// delete (hey);
	
	return (0);
}