/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:53:03 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	int	animal_count = 10;
	const Animal*	animals[animal_count];

	for (int i = 0; i < animal_count; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < animal_count; i++)
		delete animals[i];

	// Testing for shallowness
	Dog original;
	original.getBrain()->setIdea("Chase the cat", 0);
	Dog copy = original;
	copy.getBrain()->setIdea("Dig a hole", 0);
	std::cout << "Original Dog's idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog's idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
	return (0);
}

