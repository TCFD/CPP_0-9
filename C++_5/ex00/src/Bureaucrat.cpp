/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:42:18 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 20:42:40 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

unsigned		Bureaucrat::getGrade() const {return this->grade;}
std::string		Bureaucrat::getName() const  {return this->name;}

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
	std::cout << PURPLE << "Constructor called" << NC << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat() : name("random bureaucrat"), grade(150) {
	std::cout << PURPLE << "Default constructor called" << NC << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : name(a.getName()), grade(a.getGrade()) {}
Bureaucrat::~Bureaucrat() {std::cout << GREEN << "Destructor called" << NC << std::endl;}