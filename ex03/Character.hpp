/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:03:46 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/23 13:34:24 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "AMateria.hpp"

# define INV_SIZE 4

# define COL_R	"\033[31m"
# define COL_G	"\033[32m"
# define COL_Y	"\033[33m"
# define COL_B	"\033[34m"
# define COL_X	"\033[0m"

struct unequipped
{
	AMateria*	materia;
	unequipped*	next;
};

class ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
	public:
		Character(std::string name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		virtual ~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string		_name;
		AMateria*		_inventory[INV_SIZE];
		unequipped*		_unequipped;
};

#endif
