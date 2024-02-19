/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:20:10 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/19 20:43:19 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned() == false) {
		throw AForm::NotSignedException();
	}
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << RED << target << " has been pardoned by Zaphod Beeblebrox." << NC << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 5, 25) {
	target = "uuuuh... no one ?";
	std::cout << PURPLE << "Default PresidentialPardonForm constructor called" << NC << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 5, 25) {
	this->target = target;
	std::cout << PURPLE << "PresidentialPardonForm constructor called" << NC << std::endl;	
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << GREEN << "PresidentialPardonForm destructor called" << NC << std::endl;	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	this->target = other.target;
	return (*this);
}