/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:01:27 by zbp15             #+#    #+#             */
/*   Updated: 2023/11/22 17:08:33 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain &src);
		~Brain();
		Brain &operator=(const Brain &src);
		std::string* getIdeas(void) const;
		void setIdeas(std::string ideas);
		void setIdea(std::string idea);
		void printIdeas(void);
	private:
		std::string ideas[100];		
		int counter;
};

#endif
