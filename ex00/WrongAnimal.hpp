/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:50 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/22 23:03:03 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# define COL_R	"\033[31m"
# define COL_G	"\033[32m"
# define COL_Y	"\033[33m"
# define COL_B	"\033[34m"
# define COL_X	"\033[0m"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator = (const WrongAnimal &other);
		virtual ~WrongAnimal();

		virtual void	makeSound(void) const;

		std::string		getType() const;

	protected:
		std::string		_type;
};

#endif
