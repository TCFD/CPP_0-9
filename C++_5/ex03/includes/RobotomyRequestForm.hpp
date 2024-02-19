/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:19:18 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/15 18:11:26 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include <time.h>


#include "AForm.hpp"
#include "Bureaucrat.hpp"

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

class RobotomyRequestForm : public AForm
{
	private :
		std::string	target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &copy);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
		RobotomyRequestForm& operator=(RobotomyRequestForm& other);
		virtual void	execute(Bureaucrat const & executor) const;
};
