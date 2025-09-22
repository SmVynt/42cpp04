/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:09:14 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat () :
		WrongAnimal("WrongCat")
{
	// _type = "Cat";
	std::cout << COL_G "A Wrong Cat has been created" COL_X << std::endl;
};

WrongCat::WrongCat (const WrongCat &other) : WrongAnimal(other)
{
	std::cout << COL_G "Copy of a Wrong Cat has been constructed" COL_X << std::endl;
};

WrongCat &WrongCat::operator = (const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);  // Call base class assignment
	}
	std::cout << COL_G "Copy of a Wrong Cat has been assigned" COL_X << std::endl;
	return (*this);
};

WrongCat::~WrongCat (){
	std::cout << COL_Y "Wrong Cat is gone" COL_X << std::endl;
};

void	WrongCat::makeSound() const {
	std::cout << "*** Suspicious sounds ***" << std::endl;
}
