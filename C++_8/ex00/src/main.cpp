/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:37:01 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/11 16:20:38 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.h"

int	main(void) {
	std::vector<int>			vec;
	std::list<int>				lis;
	std::vector<int>::iterator	vecResult;
	std::list<int>::iterator	lisResult;
	
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	for (int i = 0; i < 10; i++)
		lis.push_back(i);
	testing(vec, 2, "vector");
	testing(vec, 9, "vector");
	testing(vec, 81, "vector");
	testing(vec, -1, "vector");
	testing(lis, 2, "list");
	testing(lis, 9, "list");
	testing(lis, 81, "list");
	testing(lis, -1, "list");
}