/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:17 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/09 16:56:42 by zbp15            ###   ########.fr       */
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

		Fixed			&operator=(const Fixed &fixed);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
