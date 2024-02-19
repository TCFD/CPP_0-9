/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 18:11:25 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {

	Bureaucrat	steve("Steve", 2);
	Form		newForm("newForm", 3, 3);
	Form		otherForm("otherForm", 3, 3);
	std::cout << newForm << std::endl;
	std::cout << RED << "call to newForm.beSigned()" << NC << std::endl;
	newForm.beSigned(steve);
	std::cout << newForm << std::endl;
	std::cout << RED << "call to newForm.beSigned()" << NC << std::endl;
	newForm.beSigned(steve);
	std::cout << newForm << std::endl;
	std::cout << RED << "call to steve.signForm(otherForm)" << NC << std::endl;
	steve.signForm(otherForm);
	std::cout << RED << "\ndecrement steve grade" << NC << std::endl;
	Form		oldForm("oldForm", 1, 1);
	steve.signForm(oldForm);
	std::cout << oldForm << std::endl;
}
