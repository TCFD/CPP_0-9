/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:19:18 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/14 19:40:37 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	AForm;

class PresidentialPardonForm : public AForm
{
	public:

		class NotSignedException : public std::exception{public:
			virtual const char* what() const throw();
		};

		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &copy);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		virtual void	execute(Bureaucrat const & executor) const;
};

const char* PresidentialPardonForm::NotSignedException::what()	const throw()	{return ("Form isn't signed.");}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned() == false) {
		throw NotSignedException();
	}
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("uhhh... no one ?", 5, 25) {
	std::cout << PURPLE << "Default PresidentialPardonForm constructor called" << NC << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 5, 25) {
	std::cout << PURPLE << "PresidentialPardonForm constructor called" << NC << std::endl;	
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << PURPLE << "PresidentialPardonForm destructor called" << NC << std::endl;	
}
