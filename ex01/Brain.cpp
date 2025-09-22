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

Brain::Brain () {};

// Brain::Brain(std::string type) :
// 		_type(type)
// {
// 	std::cout << COL_G "Wrong Animal of type " << type << " has been created" COL_X << std::endl;
// };

Brain::Brain (const Brain &other)
{
	for (int i = 0; i < IDEAS_COUNT; i++)
		_ideas[i] = other._ideas[i];
};

Brain &Brain::operator = (const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < IDEAS_COUNT; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
};

Brain::~Brain (){};

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
