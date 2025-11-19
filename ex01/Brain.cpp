/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:28:00 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ()
{
	std::cout << COL_B "Brain has been created" COL_X << std::endl;
}

Brain::Brain (const Brain &other)
{
	std::cout << COL_B "Brain copy has been constructed" COL_X << std::endl;
	for (int i = 0; i < IDEAS_COUNT; i++)
		_ideas[i] = other._ideas[i];
};

Brain &Brain::operator = (const Brain &other)
{
	if (this != &other)
	{
		std::cout << COL_B "Brain copy has been assigned" COL_X << std::endl;
		for (int i = 0; i < IDEAS_COUNT; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
};

Brain::~Brain ()
{
	std::cout << COL_Y "Brain has been destroyed" COL_X << std::endl;
};

std::string	Brain::getIdea(unsigned int i) const
{
	if (i < IDEAS_COUNT)
		return (_ideas[i]);
	return ("");
}

void	Brain::setIdea(std::string idea, unsigned int i)
{
	if (i < IDEAS_COUNT)
		_ideas[i] = idea;
}
