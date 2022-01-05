/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 18:54:26 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 19:18:50 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor." << std::endl;
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}

Character::Character(std::string NewName) : Name(NewName)
{
	std::cout << "Character name constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}

Character::Character(const Character &Copy)
{
	std::cout << "Character copy constructor called." << std::endl;
	this->Name = Copy.GetName();
}

Character::~Character(void)
{
	std::cout << "Character destructor called." << std::endl;
}

std::string const & Character::GetName() const
{
	return (this->Name);
}

void Character::Equip(AMateria* Materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->Materia[i] == NULL)
		{
			this->Materia[i] = Materia;
			break ;
		}
	}
}

void Character::Unequip(int Index)
{
	if (Index >= 0 && Index <= 3)
		this->Materia[Index] = NULL;
}

void Character::Use(int Index, ICharacter& Target)
{
	if (Index >= 0 && Index <= 3)
	{
		if (this->Materia[Index] != NULL)
			this->Materia[Index]->Use(Target);
	}
}