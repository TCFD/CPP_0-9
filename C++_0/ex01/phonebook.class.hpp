/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:35:14 by rciaze            #+#    #+#             */
/*   Updated: 2023/05/30 14:18:31 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
	#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook	{
	public:
		Contact	tab[8];
		int		NumberOfEntries;
		PhoneBook();
		~PhoneBook();		
		
};


#endif