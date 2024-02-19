/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:56:01 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/14 16:27:53 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

AForm::AForm(std::string name, int gradeToExecute, int gradeToSign) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	std::cout << PURPLE << "AForm constructor called" << NC << std::endl;
	if (gradeToExecute < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const AForm &instance) {
	out << "AForm " << instance.getName() << " requires grade " << instance.getGradeToSign() << " to sign, and grade " << instance.getGradeToExecute() << " to execute.";
	if (instance.getIsSigned())
		out << " It is signed." << std::endl;
	else
		out << " It is not signed." << std::endl;
	return out;
}

void		AForm::beSigned(Bureaucrat &newGuy) {
	if (isSigned)
		std::cout << RED << name << " is already signed" << NC << std::endl;
	else {
		if (newGuy.getGrade() > getGradeToSign())
			throw GradeTooLowException();
		isSigned = true;
	}
}


AForm::~AForm()	{std::cout << GREEN << "AForm Destructor called" << NC << std::endl;}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

AForm::AForm(const AForm &a) : name(a.getName()), isSigned(a.getIsSigned()), gradeToSign(a.getGradeToSign()), gradeToExecute(a.getGradeToExecute()) {
	std::cout << PURPLE << "AForm copy constructor called" << NC << std::endl;
}

AForm::AForm() : name("random aform"), isSigned(false), gradeToSign(150), gradeToExecute(150) {
	std::cout << PURPLE << "AForm default constructor called" << NC << std::endl;
}

const char* AForm::NotSignedException::what()	const throw()	{return ("Form isn't signed.");}


const char* AForm::GradeTooLowException::what()	const throw()	{return ("Grade is too low");}
const char* AForm::GradeTooHighException::what()	const throw()	{return ("Grade is too high");}
unsigned	AForm::getGradeToSign()				const 			{return gradeToSign;}
unsigned	AForm::getGradeToExecute()			const 			{return gradeToExecute;}
bool		AForm::getIsSigned()					const 			{return isSigned;}
std::string	AForm::getName()						const 			{return name;}
