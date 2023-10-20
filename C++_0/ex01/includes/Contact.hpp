/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:43:39 by rciaze            #+#    #+#             */
/*   Updated: 2023/05/30 15:53:24 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
	#define CONTACT_CLASS_HPP

#include <iostream>
#include <stdlib.h>

class Contact	{
	public:	
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		PhoneNumber;
		std::string		DarkestSecret;

		Contact(void);
		~Contact(void);
};

#endif 