/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:17 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/13 10:44:02 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(int const n);
		Fixed(float const n);
		Fixed(const Fixed &fixed);
		~Fixed();
		
		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const ;
		void	setRawBits(int const raw);

		Fixed			&operator=(Fixed const &fixed);	
		Fixed			operator+(Fixed const &other);
		Fixed			operator-(Fixed const &other);
		Fixed			operator*(Fixed const &other);
		Fixed			operator/(Fixed const &other);
	
		Fixed			operator++(int);
		Fixed&			operator++();
		Fixed			operator--(int);
		Fixed&			operator--();
	
		bool			operator<(Fixed const &other);
		bool			operator>(Fixed const &other);
		bool			operator>=(Fixed const &other);
		bool			operator<=(Fixed const &other);
		bool			operator!=(Fixed const &other);
		bool			operator==(Fixed const &other);

		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	const &min(Fixed const &a, Fixed const &b);
		static Fixed	const &max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
