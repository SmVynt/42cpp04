/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:35:13 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () :
		Animal("Dog")
{
	std::cout << COL_G "A Dog has been created" COL_X << std::endl;
	_brain = new Brain();
};

Dog::Dog (const Dog &other) : Animal(other)
{
	_brain = new Brain(*other._brain);
	std::cout << COL_G "Copy of a Dog has been constructed" COL_X << std::endl;
};

Dog &Dog::operator = (const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);  // Call base class assignment
		*_brain = *other._brain;
	}
	std::cout << COL_G "Copy of a Dog has been assigned" COL_X << std::endl;
	return (*this);
};

Dog::~Dog (){
	delete _brain;
	std::cout << COL_Y "Dog is gone" COL_X << std::endl;
};

void	Dog::makeSound() const {
	std::cout << "*** BARK ***" << std::endl;
}

Brain*	Dog::getBrain(void) const {
	return (_brain);
}
