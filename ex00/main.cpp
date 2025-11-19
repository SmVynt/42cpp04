/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:11:37 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << "dog type: " << dog->getType() << std::endl;
	std::cout << "cat type: " << cat->getType() << std::endl;

	std::cout << "\nSounds (should be specific to each animal):" << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;

	std::cout << "\nSounds (WrongCat should output WrongAnimal sound):" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

	return (0);
}

