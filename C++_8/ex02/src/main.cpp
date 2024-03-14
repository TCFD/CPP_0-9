/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:17:35 by zbp15             #+#    #+#             */
/*   Updated: 2024/03/13 12:22:04 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
private:
    std::stack<T> stack;

public:
    // Définition de l'itérateur pour MutantStack
    class iterator {
    private:
        typename std::stack<T>::container_type::iterator current;

    public:
        iterator(typename std::stack<T>::container_type::iterator it) : current(it) {}

        T& operator*() {
            return *current;
        }

        iterator& operator++() {
            ++current;
            return *this;
        }

        bool operator!=(const iterator& other) const {
            return current != other.current;
        }
    };

    iterator begin() {
        return iterator(std::stack<T>::c.begin());
    }

    iterator end() {
        return iterator(std::stack<T>::c.end());
    }

    // Implémentation des autres membres de MutantStack...
};

int main() {
    MutantStack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Parcourir les éléments de la pile à l'aide de l'itérateur
    for (MutantStack<int>::iterator it = myStack.begin(); it != myStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}