/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:55:46 by rciaze            #+#    #+#             */
/*   Updated: 2023/06/13 12:58:56 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Search2(std::string str){
	std::string	spaces = "          ";
	int			NbOfChars;

	std::cout << "|";
	NbOfChars = str.length();
	if (NbOfChars > 10)
        std::cout << str.substr(0, 9) << ".";
	else
        std::cout << spaces.substr(0, 10 - NbOfChars) << str;
}

void	PrintStuff(Contact contact){
	std::cout << "First name : " << contact.FirstName << std::endl;
	std::cout << "Last name : " << contact.LastName << std::endl;
	std::cout << "Nickname : " << contact.Nickname << std::endl;
	std::cout << "Phone number : " << contact.PhoneNumber << std::endl;
	std::cout << "Darkest secret : " << contact.DarkestSecret << std::endl;
}

void	search(PhoneBook *Phone) {
	std::string	str;
	int 		i = 0;

	for (i = 0; i < Phone->NumberOfEntries; i++) {
    	std::cout << i << " ";
		Search2(Phone->tab[i].FirstName);
		Search2(Phone->tab[i].LastName);
		Search2(Phone->tab[i].Nickname);
		Search2(Phone->tab[i].PhoneNumber);
		Search2(Phone->tab[i].DarkestSecret);
		std::cout << "|" <<std::endl;
	}
	while (1){
		std::cout << "So, who do you want to look into ?" <<std::endl;
		std::getline (std::cin, str);
		if (str != "")
		{
			i = std::atoi(str.c_str());
			if (i < 0 || i >= Phone->NumberOfEntries)
				std::cout << "Wrong number. You can only use number in this range : 0 - " << Phone->NumberOfEntries - 1 << std::endl;
			else
				break;
		}
	}
	PrintStuff(Phone->tab[i]);
}

int	CheckWho(PhoneBook *Phone){
	std::string restult;
	if (Phone->NumberOfEntries == 8){
		std::cout << "Warning ! You alredy have entered the max number of contatacs. Adding another one will just replace the last one"
			<< std::endl << "Do you want to still add the contact ? (y/n)" << std::endl;
		while (1){
			std::cin >> restult;
			if (restult == "y"){
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

void	AddTo(std::string *str, int *boolean){
	std::getline (std::cin, *str);
		if (*str != "")
			*boolean = 0;
}

void	AddPhone(std::string *str, int *boolean){
	std::getline (std::cin, *str);
		if (*str != ""){
			for (unsigned i = 0; i < str->length(); ++i){
				if (str->at(i) < '0' || str->at(i) > '9'){
					std::cout << "wsh" << std::endl;
					return ;
				}
			}
			*boolean = 0;
		}
}

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
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			add(&book);
		else if (command == "SEARCH" && book.NumberOfEntries != 0)
			search(&book);
		else if (command == "SEARCH")
			std::cout << BOLD << RED <<"There is no one in the book yet ! Please do 'ADD' to add someone." << NC << std::endl;
	}
	return (1);
}