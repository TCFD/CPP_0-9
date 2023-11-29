/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:32:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:53:33 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* l = new WrongAnimal();

	std::cout << "j (dog) is of type : " << j->getType() << " " << std::endl;
	std::cout << "i (dog) is of type : " << i->getType() << " " << std::endl;
	std::cout << "Cat : "; i->makeSound();
	std::cout << "Dog : "; j->makeSound();
	std::cout << "Animal : "; meta->makeSound();
	std::cout << "WrongAnimal : "; k->makeSound();
	std::cout << "WrongCat : "; l->makeSound();

	delete meta;
	delete j;
	delete i;
	delete k;
	return 0;
}