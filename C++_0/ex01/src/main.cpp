/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:55:46 by rciaze            #+#    #+#             */
/*   Updated: 2023/10/20 15:09:57 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"


void	add(PhoneBook *Phone){
	int				boolean = 1;

	if (CheckWho(Phone))
		return ;
	while (boolean){
		std::cout << LIGHT_GREEN << "Please enter your first name."<< NC << std::endl;
		AddTo(&Phone->tab[Phone->NumberOfEntries].FirstName, &boolean);
	}
	boolean = 1;
	while (boolean){
		std::cout << LIGHT_GREEN << "Please enter your last name."<< NC << std::endl;
		AddTo(&Phone->tab[Phone->NumberOfEntries].LastName, &boolean);
	}
	boolean = 1;
	while (boolean){
		std::cout << LIGHT_GREEN << "Please enter your nickname."<< NC << std::endl;
		AddTo(&Phone->tab[Phone->NumberOfEntries].Nickname, &boolean);
	}
	boolean = 1;
	while (boolean){
		std::cout << LIGHT_GREEN << "Please enter your phone number."<< NC << std::endl;
		AddPhone(&Phone->tab[Phone->NumberOfEntries].PhoneNumber, &boolean);
	}
	boolean = 1;
	while (boolean){
		std::cout << LIGHT_GREEN << "Please enter your darkest secret."<< NC << std::endl;
		AddTo(&Phone->tab[Phone->NumberOfEntries].DarkestSecret, &boolean);
	}
	Phone->NumberOfEntries++;
}

int	main(void){
	PhoneBook 	book;
	std::string command;

	std::cout << LIGHT_GRAY << "Welcome to your advanced phonebook ! " << NC << std::endl;
	while (1){
		std::cout << BOLD << LIGHT_GRAY << "Please, enter a command" << NC << std::endl;
		std::getline (std::cin, command);
		if (command == "EXIT" || std::cin.eof()){
			std::cout << BOLD << PURPLE << "Bye !" << NC << std::endl;
			return (0);
		}
		else if (command == "ADD")
			add(&book);
		else if (command == "SEARCH" && book.NumberOfEntries != 0)
			search(&book);
		else if (command == "SEARCH")
			std::cout << BOLD << RED <<"There is no one in the book yet ! Please do 'ADD' to add someone." << NC << std::endl;
	}
	return (1);
}