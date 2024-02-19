/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:56:01 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 18:05:05 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

Form::Form(std::string name, int gradeToExecute, int gradeToSign) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	std::cout << PURPLE << "Form constructor called" << NC << std::endl;
	if (gradeToExecute < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw GradeTooLowException();
}

Form::Form() : name("random form"), isSigned(false), gradeToSign(150), gradeToExecute(150) {
	std::cout << PURPLE << "Form default constructor called" << NC << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Form &instance) {
	out << "Form " << instance.getName() << " requires grade " << instance.getGradeToSign() << " to sign, and grade " << instance.getGradeToExecute() << " to execute.";
	if (instance.getIsSigned())
		out << " It is signed." << std::endl;
	else
		out << " It is not signed." << std::endl;
	return out;
}

void		Form::beSigned(Bureaucrat &newGuy) {
	if (isSigned)
		std::cout << RED << name << " is already signed" << NC << std::endl;
	else {
		if (newGuy.getGrade() > getGradeToSign())
			throw GradeTooLowException();
		isSigned = true;
	}
}


Form::~Form()	{std::cout << GREEN << "Form Destructor called" << NC << std::endl;}

Form& Form::operator=(Form& other) {
	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

Form::Form(const Form &a) : name(a.getName()), isSigned(a.getIsSigned()), gradeToSign(a.getGradeToSign()), gradeToExecute(a.getGradeToExecute()) {
	std::cout << PURPLE << "Form copy constructor called" << NC << std::endl;
}

const char* Form::GradeTooLowException::what()	const throw()	{return ("Grade is too low");}
const char* Form::GradeTooHighException::what()	const throw()	{return ("Grade is too high");}
unsigned	Form::getGradeToSign()				const 			{return gradeToSign;}
unsigned	Form::getGradeToExecute()			const 			{return gradeToExecute;}
bool		Form::getIsSigned()					const 			{return isSigned;}
std::string	Form::getName()						const 			{return name;}
