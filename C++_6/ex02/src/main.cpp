/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:35:25 by zbp15             #+#    #+#             */
/*   Updated: 2024/02/22 18:05:54 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base * generate(void) {
	Base *rt;

	std::cout << "\nGenerating new obj (";
	switch (clock() % 3) {
		case 0 :
		{
			std::cout << GREEN << "A" << NC << ")" << std::endl;
			rt = new A();
			return (rt);
		}
		case 1 :
		{	
			std::cout << CYAN << "B" << NC << ")" << std::endl;
			rt = new B();
			return (rt);
		}
		case 2 :
		{
			std::cout << PURPLE << "C" << NC << ")" << std::endl;
			rt = new C();
			return (rt);
		}
	}
	return (NULL);
}

void identify(Base* p) {
	
	std::cout << "Using pointers : " << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << GREEN << "\tIt's A" << NC << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << CYAN << "\tIt's B" << NC << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << PURPLE << "\tIt's C" << NC << std::endl;
	else
		std::cout << RED << "\tUnkown type." << std::endl;
}

void identify(Base& p) {
	std::cout << "Using refs : " << std::endl;
	try 
	{
		A& aTest = dynamic_cast<A&>(p);
		(void)aTest;
		std::cout << GREEN << "\tIt's A" << NC << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try 
	{
		B& bTest = dynamic_cast<B&>(p);
		(void)bTest;
		std::cout << CYAN << "\tIt's B" << NC << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try 
	{
		C& cTest = dynamic_cast<C&>(p);
		(void)cTest;
		std::cout << PURPLE << "\tIt's C" << NC << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}

int main () {
	Base *test = generate();
	identify(test);
	identify(*test);

	test = generate();
	identify(test);
	identify(*test);

	test = generate();
	identify(test);
	identify(*test);

	test = generate();
	identify(test);
	identify(*test);
}