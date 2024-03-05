/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Array.tpp										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: zbp15 <zbp15@student.42.fr>				+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/05 13:39:47 by zbp15			 #+#	#+#			 */
/*   Updated: 2024/03/05 13:52:15 by zbp15			###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

template<class T>
Array<T>::Array(void) {
	tab = new T[0];
	a_size = 0;
}

template<class T>
Array<T>::Array(unsigned n) {
	tab = new T[n];
	for (unsigned i = 0; i < n; i++)
		tab[i] = 0;
	a_size = n;
}

template<class T>
Array<T>::Array(Array const &src) {
	tab = new T[src.a_size];
	for (unsigned i = 0; i < src.a_size; i++)
		tab[i] = src.tab[i];
	a_size = src.a_size;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T> &src) {
	if (this != &src) {
		delete[] tab;
		tab = new T[src.a_size];
		a_size = src.a_size;
		for (unsigned i = 0; i < a_size; ++i) {
			tab[i] = src.tab[i];
		}
	}
	return *this;
}

template<class T>
const T& Array<T>::operator[](unsigned index) const {
	if (index >= size) {
		throw std::out_of_range("Index out of bounds");
	}
	return tab[index];
}

template<class T>
T& Array<T>::operator[](unsigned index) {
	if (index >= a_size)
		throw std::out_of_range("Index out of bounds");
	return tab[index];
}

template<class T>
unsigned	Array<T>::size() {return a_size;}