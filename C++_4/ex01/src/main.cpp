/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:32:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/12/07 14:48:55 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int main()
{
	Animal *a[100];

	int i = 0;
	for (; i < 50; ++i)
		a[i] = new Dog();
	for (; i < 100; ++i)
		a[i] = new Cat();

	a[0]->getBrain()->printIdeas();
	a[0]->getBrain()->setIdeas("EH OHHHH");
	a[0]->getBrain()->printIdeas();
	a[0]->getBrain()->setIdeas("ON M'ENTENDS ?");
	std::cout << "----------------------------------\n";
	a[0]->getBrain()->printIdeas();

	for (int j = 0; j < 100; ++j)
		delete a[j];

	Dog hey;
	{
		hey.getBrain()->setIdeas("HEY");
		Dog tmp = hey;
	}
	hey.getBrain()->printIdeas();
	return (0);
}