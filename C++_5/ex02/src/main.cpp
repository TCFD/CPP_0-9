/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 17:33:35 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {


	Bureaucrat newGuy("newGuy", 2);
	std::cout << CYAN << "\nShrubberyCreationForm" << NC << std::endl;
	try {
		ShrubberyCreationForm form("Jean guy");	
		form.beSigned(newGuy);
		std::cout << form << std::endl;	
		form.execute(newGuy);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nPresidentialPardonForm" << NC << std::endl;
	try {
		PresidentialPardonForm form("Jean guy");	
		form.beSigned(newGuy);
		std::cout << form << std::endl;	
		form.execute(newGuy);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nRobotomyRequestForm multiple times" << NC << std::endl;
	try {
		RobotomyRequestForm form("Jean guy");	
		form.beSigned(newGuy);
		std::cout << form << std::endl;	
		form.execute(newGuy);
		form.execute(newGuy);
		form.execute(newGuy);
		form.execute(newGuy);
		form.execute(newGuy);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << CYAN << "\nUnsigned form" << NC << std::endl;
	try {
		PresidentialPardonForm form("Jean guy");	
		std::cout << form << std::endl;	
		form.execute(newGuy);
		std::cout << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}
