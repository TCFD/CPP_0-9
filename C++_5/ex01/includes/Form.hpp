/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:56:08 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/14 16:26:57 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Form(const Form &a);
		Form& operator=(Form& other);
};

std::ostream	&operator<<(std::ostream &out, const Form &instance);