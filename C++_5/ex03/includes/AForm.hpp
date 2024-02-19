	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:56:08 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/14 16:26:57 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

class Bureaucrat;

class AForm {
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
		class NotSignedException : public std::exception{public:
			virtual const char* what() const throw();
		};
		AForm(std::string name, int getGradeToExecute, int gradeToSign);
		AForm(const AForm &a);
		AForm& operator=(const AForm& other);
		AForm();

		virtual ~AForm();
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator<<(std::ostream &out, const AForm &instance);