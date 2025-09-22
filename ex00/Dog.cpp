/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 14:43:20 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () :
		Animal("Dog")
{
	// _type = "Dog";
	std::cout << COL_G "A Dog has been created" COL_X << std::endl;
};

Dog::Dog (const Dog &other) : Animal(other)
{
	std::cout << COL_G "Copy of a Dog has been constructed" COL_X << std::endl;
};

Dog &Dog::operator = (const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);  // Call base class assignment
	}
	std::cout << COL_G "Copy of a Dog has been assigned" COL_X << std::endl;
	return (*this);
};

Dog::~Dog (){
	std::cout << COL_Y "Dog is gone" COL_X << std::endl;
};

void	Dog::makeSound() const {
	std::cout << "*** BARK ***" << std::endl;
}
