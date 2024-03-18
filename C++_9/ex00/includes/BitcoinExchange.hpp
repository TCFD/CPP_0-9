/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:28:48 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/18 18:51:47 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <stdlib.h>
#include <ctime>
#include <limits.h>
#include <string.h>

class BitcoinExchange {
	public :
		BitcoinExchange() {};
		BitcoinExchange(const BitcoinExchange& src) {(void)src;};
		~BitcoinExchange() {};
		BitcoinExchange& operator=(const BitcoinExchange& obj) {(void)obj; return *this;};
		void	storeData(const char *path);
		void	interpretInput(const char *path);
	private :
		std::map<std::string, float> data;
		
};
