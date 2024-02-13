/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/13 20:32:31 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {

	std::cout << CYAN << "\nIncrementing too high" << NC << std::endl;
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
	std::cout << CYAN << "\nDecrementing too high" << NC << std::endl;
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

	std::cout << CYAN << "\nInitialization too low" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 151);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nInitialization too high" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 0);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nInitialization at upper limit" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 1);
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nInitialization at lower limit" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 150);
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << CYAN << "\nDecrementing then incrementing" << NC << std::endl;

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

	std::cout << CYAN << "\nIncrementing then Decrementing" << NC << std::endl;

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
