/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:34:09 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 20:44:26 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"


Intern::Intern(){}
Intern::~Intern(){}
Intern& Intern::operator=(const Intern& other){(void)(other);return *this;}
Intern::Intern(const Intern &cpy){(void)(cpy);}

AForm *Intern::InternS (std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::InternR (std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::InternP (std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target){
	std::string	tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm*		(Intern:: *p[3])(std::string) = {&Intern::InternR, &Intern::InternP, &Intern::InternS};
	int			i = 0;
	
	while (i < 3 && tab[i].compare(name)){
		i++;
	}
	if (i < 3)
		return (this->*p[i])(target);
	else
		std::cout << RED << "Invalid form name." << NC << std::endl;
	return (NULL);
}
