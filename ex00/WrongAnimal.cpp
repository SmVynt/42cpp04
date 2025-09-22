/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:08:48 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () :
		_type("Unknown")
{
	std::cout << COL_G "The unknown wrong animal has been created" COL_X << std::endl;
};

WrongAnimal::WrongAnimal(std::string type) :
		_type(type)
{
	std::cout << COL_G "Wrong Animal of type " << type << " has been created" COL_X << std::endl;
};

WrongAnimal::WrongAnimal (const WrongAnimal &other) :
		_type(other._type)
{
	std::cout << COL_G "Copy of a Wrong Animal has been constructed" COL_X << std::endl;
};

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << COL_G "Copy of a Wrong Animal has been assigned" COL_X << std::endl;
	return (*this);
};

WrongAnimal::~WrongAnimal (){
	std::cout << COL_Y "Wrong Animal is gone" COL_X << std::endl;
};

void	WrongAnimal::makeSound() const {
	std::cout << "*** Random weird noizes ***" << std::endl;
}

std::string		WrongAnimal::getType() const {return(_type);};
