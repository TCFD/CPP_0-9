/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:46:00 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/15 15:44:02 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
	#define MAIN_HPP

# include "Phonebook.hpp"
# include "Contact.hpp"
# include <iostream>
# include <stdlib.h>
# include <cstdio>


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
void	AddPhone(std::string *str, int *boolean);
void	CtrlD(void);
bool	check_letters(std::string str);
bool	check_number(std::string str);

#endif