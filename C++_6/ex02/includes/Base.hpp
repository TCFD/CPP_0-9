/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:34:01 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/22 18:01:30 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <time.h>
#include <iostream>
#include <stdlib.h>

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

class Base
{
	public:
		virtual ~Base(void){}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
