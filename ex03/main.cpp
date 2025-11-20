/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/11/20 13:25:36 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
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

	/*
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
	player->unequip(4);
	player->unequip(4);
	player->unequip(4);
	player->unequip(3);
	player->equip(src2->createMateria("cure"));
	player->equip(src2->createMateria("cure"));
	player->equip(src2->createMateria("ice"));

	ICharacter* enemy = new Character("enemy");
	player->use(0, *enemy);
	player->use(1, *enemy);
	player->use(2, *enemy);
	player->use(3, *enemy);
	player->use(4, *enemy);

	// Test: Unequip and re-equip
	player->unequip(2);
	player->equip(src2->createMateria("ice"));
	player->use(2, *enemy);

	// Test: Deep copy
	std::cout << "Testing Copy Constructor Deep Copy..." << std::endl;
	Character original("original");
	original.equip(src2->createMateria("ice"));
	original.equip(src2->createMateria("cure"));

	Character copy = original;
	copy.unequip(0);
	copy.equip(src2->createMateria("cure"));

	std::cout << "Original inventory (Copy Const):" << std::endl;
	original.use(0, *enemy);
	original.use(1, *enemy);

	std::cout << "Copy inventory (Copy Const):" << std::endl;
	copy.use(0, *enemy);
	copy.use(1, *enemy);

	// Test: Assignment Operator Deep Copy
	std::cout << "Testing Assignment Operator Deep Copy..." << std::endl;
	Character assigned("assigned");
	assigned.equip(src2->createMateria("ice")); // Give it something initially

	assigned = original; // Assignment

	// Modify assigned, original should not change
	assigned.unequip(0);
	assigned.equip(src2->createMateria("cure"));

	std::cout << "Original inventory:" << std::endl;
	original.use(0, *enemy); // Should be ice
	original.use(1, *enemy); // Should be cure

	std::cout << "Assigned inventory:" << std::endl;
	assigned.use(0, *enemy); // Should be cure (replaced)
	assigned.use(1, *enemy); // Should be cure (copied)

	delete enemy;
	delete player;
	delete src2;
	*/

	return (0);
}

