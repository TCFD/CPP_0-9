/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:56:01 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/13 21:16:36 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

Form::Form(std::string name, int grade_to_execute, int ngrade_to_sign) : name(name), grade_to_execute(grade_to_execute), grade_to_sign(grade_to_sign), is_signed(false){
	std::cout << PURPLE << "Form constructor called" << NC << std::endl;
	if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
}

Form::~Form() {std::cout << GREEN << "Form constructor called" << NC << std::endl;}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

int			Form::get_grade_to_sign()		const {return grade_to_sign;}
int			Form::get_grade_to_execute()	const {return grade_to_execute;}
bool		Form::get_is_signed()			const {return is_signed;}
std::string	Form::get_name()				const {return name;}
