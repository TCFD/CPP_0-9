/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 16:29:00 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {

	std::cout << CYAN << BOLD << "\nIncrementing too high" << NC << std::endl;
	try {
		Bureaucrat newGuy("newGuy", 3);
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << CYAN << BOLD << "\nDecrementing too low" << NC << std::endl;
	try {
		Bureaucrat newGuy("newGuy", 148);
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << BOLD << "\nInitialization too low (151)" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 151);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << BOLD << "\nInitialization too high (0)" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 0);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << BOLD << "\nInitialization at upper limit (1)" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 1);
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << BOLD << "\nInitialization at lower limit (150)" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 150);
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << BOLD << "\nDecrementing then incrementing" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 5);
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();

		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << BOLD << "\nIncrementing then Decrementing" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 5);
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.incrementGrade();
	
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
		std::cout << newGuy << std::endl;
		newGuy.decrementGrade();
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}
