/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/15 18:12:01 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {


	std::cout << CYAN << "\nIncrementing too high" << NC << std::endl;
	try {
		Bureaucrat newGuy("newGuy", 3);
		PresidentialPardonForm form("Jean guy");	
		std::cout << form << std::endl;	
		std::cout << newGuy << std::endl;
		form.execute(newGuy);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

}
