/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:00:46 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/17 16:25:00 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	protected :
		std::string type;
	public :
		WrongCat();
		WrongCat(const WrongCat &src);
		virtual ~WrongCat();
		WrongCat &operator=(const WrongCat &src);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif