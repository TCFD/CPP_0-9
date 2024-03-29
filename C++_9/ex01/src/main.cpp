/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rciaze <rciaze@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/19 14:22:27 by rciaze			#+#	#+#			 */
/*   Updated: 2024/03/19 15:49:51 by rciaze		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cstdlib>

long long operate(long long a, long long b, char op) {
	switch(op) {
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': 
			if(b == 0) {
				std::cout << "Erreur: Division par zéro." << std::endl;
				exit(1);
			}
			return a / b;
		default: 
			std::cout << "Erreur: Opérateur inconnu '" << op << "'." << std::endl;
			exit(1);
	}
}

int main(int argc, char* argv[]) {
	if(argc != 2) {
		std::cout << "Usage: " << argv[0] << " \"EXPR\"" << std::endl;
		return 1;
	}

	std::string input = argv[1];
	std::istringstream iss(input);
	std::string token;
	std::stack<long long> s;

	while(iss >> token) {
		if(token == "+" || token == "-" || token == "*" || token == "/") {
			if(s.size() < 2) {
				std::cout << "Erreur: Expression invalide." << std::endl;
				return 1;
			}
			int b = s.top();
			s.pop();
			int a = s.top();
			s.pop();
			long long result = operate(a, b, token[0]);
			if (result != static_cast<int>(result)) {
				std::cout << "Erreur: resultat en dehors des limites d'un int." << std::endl;
				return 1;
			}
			s.push(result);
		} else {
			if (token.length() > 1) {
				std::cout << "Erreur: Expression invalide." << std::endl;
				return 1;
			}
			int num = std::atoi(token.c_str());
			s.push(num);
		}
	}

	if(s.size() != 1) {
		std::cout << "Erreur: Expression invalide ou incomplète." << std::endl;
		return 1;
	}

	std::cout << "Résultat: " << s.top() << std::endl;
	return 0;
}
