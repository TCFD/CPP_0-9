/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:00:46 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/29 15:06:23 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal &src);
		virtual ~Animal();
		Animal &operator=(const Animal &src);
		std::string getType() const;
		virtual void makeSound() const;
		virtual Brain* getBrain() const;
};

#endif