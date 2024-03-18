/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:19:13 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/18 18:05:40 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid args" << std::endl;
		return 0;
	}
	BitcoinExchange	data;

	try	{data.storeData("data.csv");
		 data.interpretInput(argv[1]);}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
}