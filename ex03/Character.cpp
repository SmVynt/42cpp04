/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:03:46 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/23 13:34:55 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name) : _name(name), _unequipped(NULL)
{
	for (int i = 0; i < INV_SIZE; i++)
		_inventory[i] = NULL;
};
Character::Character(const Character &other) : _name(other._name), _unequipped(NULL)
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}
Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < INV_SIZE; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			};
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}
Character::~Character()
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	unequipped* temp;
	temp = _unequipped;
	while (temp)
	{
		delete temp->materia;
		temp->materia = NULL;
		unequipped* to_delete = temp;
		temp = temp->next;
		delete to_delete;
	}
};

std::string const & Character::getName() const { return (_name); };

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (!_inventory[i])
		{
			// _inventory[i] = m;
			_inventory[i] = m->clone();
			return ;
		}
	}
};

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= INV_SIZE || !_inventory[idx])
		return ;
	unequipped* newMat = new unequipped;
	newMat->materia = _inventory[idx];
	newMat->next = NULL;

	if (_unequipped == NULL) {
		_unequipped = newMat;
	} else {
		unequipped* temp = _unequipped;
		while (temp->next)
			temp = temp->next;
		temp->next = newMat;
	}
	_inventory[idx] = NULL;
};

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INV_SIZE || !_inventory[idx])
		return ;
	std::cout << COL_Y << _name << COL_X << std::endl;
	_inventory[idx]->use(target);
};
