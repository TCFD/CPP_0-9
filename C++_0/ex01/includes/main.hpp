/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:46:00 by rciaze            #+#    #+#             */
/*   Updated: 2023/10/20 15:11:39 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <stdlib.h>

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define YELLOW				"\e[33m"
# define BLUE				"\e[34m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"
# define LIGHT_GRAY			"\e[37m"
# define LIGHT_GREEN		"\033[92m"
# define BOLD				"\033[1m"

void	add(PhoneBook *Phone);
void	search(PhoneBook *Phone);
void	PrintTabElmt(std::string str);
int		CheckWho(PhoneBook *Phone);
void	AddTo(std::string *str, int *boolean);
void	AddPhone(std::string *str, int *boolean);
void	CtrlD(void);
void	PrintStuff(Contact contact);
bool	check_letters(std::string str);
bool	check_number(std::string str);
