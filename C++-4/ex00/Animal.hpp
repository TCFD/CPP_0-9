/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:00:46 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/17 17:09:04 by zbp15            ###   ########.fr       */
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
};

#endif