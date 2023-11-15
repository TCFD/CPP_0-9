/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:35:14 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/13 10:46:38 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
	#define PHONEBOOK_CLASS_HPP

# include "Contact.hpp"

class PhoneBook	{
	public:
		Contact	tab[8];	
		int		NumberOfEntries;
		PhoneBook();
		~PhoneBook();		
	
};

#endif