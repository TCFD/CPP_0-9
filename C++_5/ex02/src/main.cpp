/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/14 18:58:02 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {

	Bureaucrat	steve("Steve", 2);
	AForm		newAForm("newAForm", 3, 3);
	std::cout << newAForm << std::endl;
	newAForm.beSigned(steve);
	std::cout << newAForm << std::endl;
	newAForm.beSigned(steve);
	std::cout << newAForm << std::endl;
	steve.signAForm(newAForm);
	steve.decrementGrade();
	steve.decrementGrade();
	steve.decrementGrade();

	AForm		oldAForm("oldAForm", 1, 1);
	std::cout << steve << std::endl;
	steve.signAForm(oldAForm);
	std::cout << oldAForm << std::endl;
}
