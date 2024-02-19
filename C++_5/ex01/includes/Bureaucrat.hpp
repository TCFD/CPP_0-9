/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:42 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 20:42:46 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

class Bureaucrat	{
	private:
		const std::string	name;
		unsigned			grade;
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat();
		Bureaucrat(const Bureaucrat &a);
        Bureaucrat& operator=(const Bureaucrat& other);

		std::string			getName() const;
		unsigned 			getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form &form);

		class GradeTooHighException : public std::exception{public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{public:
			virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance);
