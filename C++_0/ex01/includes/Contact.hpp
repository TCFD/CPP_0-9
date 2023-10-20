/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:43:39 by rciaze            #+#    #+#             */
/*   Updated: 2023/10/20 18:10:52 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
	#define CONTACT_CLASS_HPP

# include "Phonebook.hpp"
# include <iostream>
# include <stdlib.h>

class PhoneBook;

class Contact	{
	public:	
	
		Contact(void);
		~Contact(void);

		std::string* getFirstName();
		void setFirstName(const std::string &name);

		std::string* getLastName();
		void setLastName(const std::string &name);

		std::string* getNickname();
		void setNickname(const std::string &name);

		std::string* getPhoneNumber();
		void setPhoneNumber(const std::string &nb);

		std::string* getDarkestSecret();
		void setDarkestSecret(const std::string &secret);

		void	AddTo(std::string *str, int *boolean);
		void	AddPhone(std::string *str, int *boolean);
		void	PrintStuff(Contact contact);
		void	PrintContactTab(PhoneBook *Phone);
	private:

		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		PhoneNumber;
		std::string		DarkestSecret;

};

#endif 