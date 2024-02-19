/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:20:10 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/15 18:12:12 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned() == false) {
		throw AForm::NotSignedException();
	}
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "--VvBRvvzzVRRvrvvvRVvvrrZzvVVvv--" <<std::endl;
	if (clock() % 2)
		std::cout << RED << target << " has been robotomized" << NC << std::endl;
	else
		std::cout << RED << target << " didn't get robotomized." << NC << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 45, 72) {
	target = "uuuuh... no one ?";
	std::cout << PURPLE << "Default RobotomyRequestForm constructor called" << NC << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 45, 72) {
	this->target = target;
	std::cout << PURPLE << "RobotomyRequestForm constructor called" << NC << std::endl;	
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << GREEN << "RobotomyRequestForm destructor called" << NC << std::endl;	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	this->target = other.target;
	return (*this);
}