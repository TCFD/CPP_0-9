/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:56:08 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/13 21:15:34 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Form {
	private:
		const std::string	name;
		bool				is_signed;
		const int		grade_to_sign;
		const int		grade_to_execute;
	public:
		int	get_grade_to_sign() const;
		int	get_grade_to_execute() const;
		bool		get_is_signed() const;
		std::string	get_name() const;
		class GradeTooHighException : public std::exception{public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{public:
			virtual const char* what() const throw();
		};
		Form(std::string name, int get_grade_to_execute, int grade_to_sign);
		~Form();
		Form(const Form &a);
        Form& operator=(Form& other);
};