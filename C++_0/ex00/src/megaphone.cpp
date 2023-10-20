/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:45:43 by rciaze            #+#    #+#             */
/*   Updated: 2023/05/26 15:46:48 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv) {
	std::string	buff;
	std::string result;

	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int j = 1; j < argc; j++){ 
		buff = argv[j];
		for (std::size_t i = 0; i < buff.length(); i++){
			if (buff[i] < 123 && buff[i] > 96)
				result += buff[i] - 32;
			else
				result += buff[i];
		}
	}
	std::cout << result << std::endl;
	return (0);
}