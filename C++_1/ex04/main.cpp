/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:33:54 by rciaze            #+#    #+#             */
/*   Updated: 2023/12/04 14:44:40 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	PutInFile(std::string content, std::string endfile) {
	std::ofstream	file(endfile.c_str());

	if (!file.is_open())
		return ;
	file << content;
}

void	replace(std::string &content, std::string s1, std::string s2) {
	std::size_t	position = 0;
	std::size_t	s1lenght = s1.length();
	
	while (1) {
		position = content.find(s1, position);
		if (position == std::string::npos || position > content.length()) {
			break ;
		}
		content.erase(position, s1lenght);
		content.insert(position, s2);
		position += s2.length();
	}
}
 

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Bad usage." << std::endl;
		return (0);
	}
	
	std::ifstream	file(argv[1]);
	std::string		content;
	std::string		add;
	
	if (!file.is_open()) {
		std::cout<< RED << "File didn't open. Check permissions, if the file exist, or if you spelled it wrong." << NC <<std::endl;
		return (0);
	}
	while (file.good()) {
		std::getline (file, add);
		content += (add + "\n");
	}
	replace(content, argv[2], argv[3]);
	std::string endfile(argv[1]);
	endfile += ".replace";
	PutInFile(content, endfile);
}