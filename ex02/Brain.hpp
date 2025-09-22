/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:50 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:28:09 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define COL_R	"\033[31m"
# define COL_G	"\033[32m"
# define COL_Y	"\033[33m"
# define COL_B	"\033[34m"
# define COL_X	"\033[0m"
# define IDEAS_COUNT 100

class Brain
{
	public:
		Brain();
		// Brain(std::string type);
		Brain(const Brain &other);
		Brain &operator = (const Brain &other);
		virtual ~Brain();

		std::string		getIdea(unsigned int i) const;
		void			setIdea(std::string idea, unsigned int i);

	private:
		std::string		_ideas[IDEAS_COUNT];
};

#endif
