/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: zbp15 <zbp15@student.42.fr>				+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/05 13:40:10 by zbp15			 #+#	#+#			 */
/*   Updated: 2024/03/05 14:02:19 by zbp15			###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include <cstdlib>

template<class T>
void	print(Array<T> a) {
	for (unsigned i = 0; i < a.size(); i++)
		std::cout << "elmt " << i << " = " << a[i] << std::endl;
}

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	std::srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = std::rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int> test(5);
	for (int i = 0; i < 5; i++)
		test[i] = std::rand() % 3;
	print(test);
	delete [] mirror;
	return 0;
}
