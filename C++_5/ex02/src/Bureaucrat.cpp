/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:42:18 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 20:43:22 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

unsigned		Bureaucrat::getGrade() const {return this->grade;}
std::string		Bureaucrat::getName() const {return this->name;}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance) {
	out << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return (out);
}

void	Bureaucrat::incrementGrade() {
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}
void	Bureaucrat::decrementGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & copy) {
	if (this != &copy)
		this->grade = copy.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	std::cout << PURPLE << "Bureaucrat constructor called" << NC << std::endl; 	 	
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

void	Bureaucrat::signAForm(AForm &form) {
	if (form.getIsSigned())
		std::cout << RED << form.getName() << " is already signed" << NC << std::endl;
	else {
		std::cout << CYAN << name;
		try 
		{
			form.beSigned(*this);
			std::cout << " signed " << form.getName() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << " couldn't sign " << form.getName() << " because his grade (" << grade << ") is lower than " << form.getName() << "'s grade (" << form.getGradeToSign() << ")" << std::endl;
		}
		std::cout << NC;
	}
}

void	Bureaucrat::executeForm(AForm const &form) {
	try 
	{
		form.execute(*this);
		std::cout << CYAN << name << " executed " << form.getName() << std::endl;
	}
	catch (const AForm::NotSignedException &e) {	
		std::cout << CYAN << name << " couldn't execute " << form.getName() << " because it's not signed" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << CYAN << name << " couldn't execute " << form.getName() << " because his grade (" << grade << ") is lower than " << form.getName() << "'s grade (" << form.getGradeToSign() << ")" << std::endl;
	}
	std::cout << NC;
}

Bureaucrat::Bureaucrat() : name("random bureaucrat"), grade(150) {
	std::cout << PURPLE << "Default constructor called" << NC << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : name(a.getName()), grade(a.getGrade()) {std::cout << PURPLE << "Bureaucrat copy constructor called" << NC << std::endl;}
Bureaucrat::~Bureaucrat() {std::cout << GREEN << "Bureaucrat destructor called" << NC << std::endl;}