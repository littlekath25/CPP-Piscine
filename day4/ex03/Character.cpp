/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 18:54:26 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:48:07 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}

Character::Character(std::string NewName) : Name(NewName)
{
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}

Character::Character(const Character &Copy)
{
	this->Name = Copy.GetName();
	for (int i = 0; i < 4; i++)
	{	
		AMateria *tmp = Copy.GetMateria(i);
		if (tmp != NULL)
			this->Materia[i] = tmp->Clone();
		else
			this->Materia[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->Materia[i] != NULL)
			delete this->Materia[i];
	}
}

std::string const & Character::GetName() const
{
	return (this->Name);
}

AMateria * Character::GetMateria(int index) const
{
	return (this->Materia[index]);
}

void Character::Equip(AMateria* Materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->Materia[i] == NULL)
		{
			this->Materia[i] = Materia->Clone();
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
