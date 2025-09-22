/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 14:43:13 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () :
		Animal("Cat")
{
	// _type = "Cat";
	std::cout << COL_G "A Cat has been created" COL_X << std::endl;
};

Cat::Cat (const Cat &other) : Animal(other)
{
	std::cout << COL_G "Copy of a Cat has been constructed" COL_X << std::endl;
};

Cat &Cat::operator = (const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);  // Call base class assignment
	}
	std::cout << COL_G "Copy of a Cat has been assigned" COL_X << std::endl;
	return (*this);
};

Cat::~Cat (){
	std::cout << COL_Y "Cat is gone" COL_X << std::endl;
};

void	Cat::makeSound() const {
	std::cout << "*** MEOW ***" << std::endl;
}
