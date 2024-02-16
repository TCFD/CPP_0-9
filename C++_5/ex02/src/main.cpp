/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/16 16:58:49 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {


	std::cout << CYAN << "\nShrubberyCreationForm\n" << NC << std::endl;
	Bureaucrat newGuy("newGuy", 6);
	try {
		ShrubberyCreationForm form("Jean guy");	
		std::cout << form << std::endl;	
		std::cout << newGuy << std::endl;
		form.execute(newGuy);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nPresidentialPardonForm\n" << NC << std::endl;
	try {
		PresidentialPardonForm form("Jean guy");	
		std::cout << form << std::endl;	
		std::cout << newGuy << std::endl;
		form.execute(newGuy);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nRobotomyRequestForm\n" << NC << std::endl;
	try {
		RobotomyRequestForm form("Jean guy");	
		std::cout << form << std::endl;	
		std::cout << newGuy << std::endl;
		form.execute(newGuy);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}
