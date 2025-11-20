/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:56:24 by psmolin           #+#    #+#             */
/*   Updated: 2025/11/20 12:55:26 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure &other) : AMateria(other) {}
Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
};
Cure::~Cure() {}

Cure* Cure::clone() const { return (new Cure(*this)); }
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
