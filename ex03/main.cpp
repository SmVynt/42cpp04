/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/23 13:32:35 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	std::cout << "===== Subject Test =====" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "\n===== Additional Tests =====" << std::endl;

	// Test: Full inventory
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());

	ICharacter* player = new Character("player");
	player->equip(src2->createMateria("ice"));
	player->equip(src2->createMateria("cure"));
	player->equip(src2->createMateria("ice"));
	player->equip(src2->createMateria("cure"));
	player->equip(src2->createMateria("ice")); // Should not equip (full)

	ICharacter* enemy = new Character("enemy");
	player->use(0, *enemy);
	player->use(1, *enemy);
	player->use(2, *enemy);
	player->use(3, *enemy);
	player->use(4, *enemy); // Invalid slot

	// Test: Unequip and re-equip
	player->unequip(2);
	player->equip(src2->createMateria("ice"));
	player->use(2, *enemy);

	// Test: Deep copy
	Character original("original");
	original.equip(src2->createMateria("ice"));
	original.equip(src2->createMateria("cure"));

	Character copy = original;
	copy.unequip(0);
	copy.equip(src2->createMateria("ice"));

	original.use(0, *enemy);
	original.use(1, *enemy);

	copy.use(0, *enemy);
	copy.use(1, *enemy);

	delete enemy;
	delete player;
	delete src2;

	return (0);
}

