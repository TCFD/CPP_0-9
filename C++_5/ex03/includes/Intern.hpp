/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:33:48 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 17:14:28 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private :
		AForm *InternS (std::string target);
		AForm *InternR (std::string target);
		AForm *InternP (std::string target);
	

	public:
        Intern& operator=(Intern& other);
		Intern(const Intern &cpy);
		Intern();
		~Intern();
		AForm	*makeForm(std::string name, std::string target);
};

