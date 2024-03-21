/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:25:03 by rciaze            #+#    #+#             */
/*   Updated: 2024/03/21 17:06:10 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {
	private:
		std::stack<T> stack;
	
	public:
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
		
				iterator& operator--() {
					--current;
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
};