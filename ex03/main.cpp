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
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	Character bob("Bob");
	Character jim("Jim");
	Character sam("Sam");
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	bob.equip(ice);
	bob.equip(cure);
	bob.equip(cure);
	bob.equip(cure);
	bob.equip(cure);
	bob.use(0, jim);
	bob.use(1, sam);
	bob.use(2, sam);
	bob.unequip(0);
	bob.equip(cure);
	bob.use(0, jim);
	bob.use(1, sam);
	bob.unequip(1);
	bob.unequip(1);
	bob.use(1, sam);
	sam.equip(cure);
	sam.use(0, bob);
	sam.unequip(0);
	sam.unequip(0);
	delete ice;
	delete cure;
	return (0);
}

