/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 14:43:01 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal () :
		_type("Unknown")
{
	std::cout << COL_G "The unknown animal has been created" COL_X << std::endl;
};

Animal::Animal(std::string type) :
		_type(type)
{
	std::cout << COL_G "Animal of type " << type << " has been created" COL_X << std::endl;
};

Animal::Animal (const Animal &other) :
		_type(other._type)
{
	std::cout << COL_G "Copy of an Animal has been constructed" COL_X << std::endl;
};

Animal &Animal::operator = (const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << COL_G "Copy of an Animal has been assigned" COL_X << std::endl;
	return (*this);
};

Animal::~Animal (){
	std::cout << COL_Y "Animal is gone" COL_X << std::endl;
};

std::string		Animal::getType() const {return(_type);};
