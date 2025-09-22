/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:50 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 14:42:14 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# define COL_R	"\033[31m"
# define COL_G	"\033[32m"
# define COL_Y	"\033[33m"
# define COL_B	"\033[34m"
# define COL_X	"\033[0m"

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator = (const Animal &other);
		virtual ~Animal();

		virtual void	makeSound(void) const;

		std::string		getType() const;

	protected:
		std::string		_type;
};

#endif
