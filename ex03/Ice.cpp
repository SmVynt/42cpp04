/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:56:24 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/23 13:12:54 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice &other) : AMateria(other) {}
Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
};
Ice::~Ice() {}

Ice* Ice::clone() const { return (new Ice(*this)); }
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
