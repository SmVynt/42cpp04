/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:56:24 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/23 13:12:40 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {};
AMateria::AMateria(const AMateria &other) : _type(other._type) {};
AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
};
AMateria::~AMateria() {};

void AMateria::use(ICharacter& target)
{
	std::cout << "Using " << _type << " on " << target.getName() << std::endl;
}

std::string const &AMateria::getType() const {return (_type);};

