/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:19:18 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/15 18:11:26 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

class ShrubberyCreationForm : public AForm
{
	private :
		std::string	target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
		virtual void	execute(Bureaucrat const & executor) const;
		
		class FileErrorException : public std::exception{public:
			virtual const char* what() const throw();
		};
};
