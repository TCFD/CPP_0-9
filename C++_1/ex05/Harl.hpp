/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:32:13 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/30 17:41:29 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__
# define __HARL__

#include <iostream>
#include <stdlib.h>
#include <csignal>


class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif