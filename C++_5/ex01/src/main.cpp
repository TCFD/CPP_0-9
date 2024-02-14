/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/14 15:43:16 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {

	Bureaucrat	steve("Steve", 2);
	Form		newForm("newForm", 3, 3);
	std::cout << newForm << std::endl;
	newForm.beSigned(steve);
	std::cout << newForm << std::endl;
	newForm.beSigned(steve);
	std::cout << newForm << std::endl;
	steve.signForm(newForm);
	steve.decrementGrade();
	steve.decrementGrade();
	steve.decrementGrade();
	Form		oldForm("oldForm", 1, 1);
	std::cout << steve << std::endl;
	steve.signForm(oldForm);
	std::cout << oldForm << std::endl;
}
