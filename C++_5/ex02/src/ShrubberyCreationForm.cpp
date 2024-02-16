/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:20:10 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/15 18:12:12 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned() == false) {
		throw AForm::NotSignedException();
	}
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();

	std::string	str = target + "_shrubbery";
	std::ofstream	file(str.c_str());
	
	if (!file.is_open())
		throw ShrubberyCreationForm::FileErrorException();
	
	file <<           
    "        	          .     .  .      +     .      .         \n"
    "     .       .      .     #       .           .\n"
    "        .      .         ###            .      .     \n"
    "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
    "          .      . \"####\"###\"####\"  .\n"
    "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        . \n"
    "  .             \"#########\"#########\"        .       \n"
    "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
    "     .     .  \"#######\"\"##\"##\"\"#######\"              \n"
    "                .\"##\"#####\"#####\"##\"           .     \n"
    "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
    "      .     \"#######\"##\"#####\"##\"#######\"      .     \n"
    "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
    "            .     \"      000      \"    .     .\n"
    "       .         .   .   000     .        .       .\n"
    ".. .. ..................O000O........................\n"
	;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 137, 145) {
	target = "uuuuh... no one ?";
	std::cout << PURPLE << "Default ShrubberyCreationForm constructor called" << NC << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 137, 145) {
	this->target = target;
	std::cout << PURPLE << "ShrubberyCreationForm constructor called" << NC << std::endl;	
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << GREEN << "ShrubberyCreationForm destructor called" << NC << std::endl;	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other) {
	this->target = other.target;
	return (*this);
}

const char* ShrubberyCreationForm::FileErrorException::what() const throw() {
	return ("Outfile error.");
}