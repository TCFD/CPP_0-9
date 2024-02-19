/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:42 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 19:17:16 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP 
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat	{
	private:
		const std::string	name;
		unsigned			grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &a);
        Bureaucrat& operator=(Bureaucrat& other);

		std::string	getName() const;
		unsigned 	getGrade() const;
		void		incrementGrade();
		void		decrementGrade();


		class GradeTooHighException : public std::exception{public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{public:
			virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance);

#endif