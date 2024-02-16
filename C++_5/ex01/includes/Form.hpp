/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:56:08 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/16 00:16:41 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form {
	private:
		const std::string	name;
		bool				isSigned;
		const unsigned		gradeToSign;
		const unsigned		gradeToExecute;
	public:
		unsigned	getGradeToSign() const;
		unsigned	getGradeToExecute() const;
		bool		getIsSigned() const;
		std::string	getName() const;

		void		beSigned(Bureaucrat &newGuy);

		class GradeTooHighException : public std::exception{public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{public:
			virtual const char* what() const throw();
		};
		Form(std::string name, int getGradeToExecute, int gradeToSign);
		~Form();
		Form();
		Form(const Form &a);
		Form& operator=(Form& other);
};

std::ostream	&operator<<(std::ostream &out, const Form &instance);

#endif