/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:42 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/14 19:11:05 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AForm;

class Bureaucrat	{
	private:
		const std::string	name;
		unsigned			grade;
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat();
		Bureaucrat(const Bureaucrat &a);
        Bureaucrat& operator=(Bureaucrat& other);

		std::string			getName() const;
		unsigned 			getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signAForm(AForm &form);

		class GradeTooHighException : public std::exception{public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{public:
			virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance);
