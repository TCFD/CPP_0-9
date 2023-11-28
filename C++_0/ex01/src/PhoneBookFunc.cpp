/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookFunc.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:39:43 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/28 19:33:27 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

void	search(PhoneBook *Phone){
	std::string	str;
	int 		i = 0;

	Phone->tab->PrintContactTab(Phone);
	while (1) {
		std::cout << "So, who do you want to look into ?" <<std::endl;
		if (!std::getline(std::cin, str)) {perror(""); CtrlD();}
		if (!std::cin.eof() && str != "")
		{
			if (!check_number(str)) {
				std::cout << RED << "Wrong input type." << NC << std::endl;
				continue ;
			}
			i = std::atoi(str.c_str());
			if (i < 1 || i > Phone->NumberOfEntries)
				std::cout << RED << "Wrong number. You can only use number in this range : 1 - " << Phone->NumberOfEntries << NC << std::endl;
			else
				break;
		}
		else if (std::cin.eof())
			CtrlD() ;
	}
	Phone->tab->PrintStuff(Phone->tab[i - 1]);
}

void	PrintTabElmt(std::string str) {
	std::cout << "|";
	if (str.length() > 10) {
        str = str.substr(0, 9) + ".";
    }

    std::cout << std::setw(10) << std::right << str ;

}

int	CheckWho(PhoneBook *Phone) {
	std::string restult;
	if (Phone->NumberOfEntries == 8) {
		std::cout << "Warning ! You alredy have entered the max number of contatacs. Adding another one will just replace the last one"
			<< std::endl << "Do you want to still add the contact ? (y/n)" << std::endl;
		while (1) {
			std::cin >> restult;
			if (restult == "y") {
				Phone->NumberOfEntries -= 1;
				return (0);
			} 
			else if (restult == "n")
				return (1);
			else
				std::cout << "Wrong input." << std::endl;
		}
	}
	return (0);
}

void	AddPhone(std::string *str, int *boolean) {
	if (!std::getline(std::cin, *str)) {perror(""); CtrlD();}
	if (!std::cin.eof() && *str != "") {
		if (!check_number(*str)) {
			std::cout << RED << "Wrong input type." << NC << std::endl;
			return ;
		}
		*boolean = 0;
	}
	else if (std::cin.eof())
		CtrlD() ;
}