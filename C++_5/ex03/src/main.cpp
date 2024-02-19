/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:15 by rciaze            #+#    #+#             */
/*   Updated: 2024/02/19 17:35:14 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(void) {
	Intern someRandomIntern;
	Bureaucrat	bob("Bob", 1);
	AForm* rrf;
	AForm* ppf;
	AForm* scf;
	AForm* doesntExist;

	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->beSigned(bob);
	std::cout << std::endl;
	ppf = someRandomIntern.makeForm("presidential pardon", "TurboTanguy");
	ppf->beSigned(bob);
	std::cout << std::endl;
	scf = someRandomIntern.makeForm("shrubbery creation", "Alfred");
	scf->beSigned(bob);
	std::cout << std::endl;
	doesntExist = someRandomIntern.makeForm("who ?", "Alfred");
	std::cout << std::endl;

	try {
		std::cout << CYAN << "robotomy form execution" << NC << std::endl;
		rrf->execute(bob);
		std::cout << std::endl;
		std::cout << CYAN << "presidential form execution" << NC << std::endl;
		ppf->execute(bob);
		std::cout << std::endl;
		std::cout << CYAN << "shrubbery form execution" << NC << std::endl;
		scf->execute(bob);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}

	delete rrf;
	delete ppf;
	delete scf;
}
