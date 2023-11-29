/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:32:20 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 14:40:47 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int main() {
    // Animal animal; // error: cannot declare variable ‘animal’ to be of abstract type ‘Animal’

    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}