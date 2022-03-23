/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/07 13:15:34 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:24:14 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &Copy)
{
	for (int i = 0; i < 4; i++)
	{	
		AMateria *tmp = Copy.GetMateria(i);
		if (tmp != NULL)
			this->Materia[i] = tmp->Clone();
		else
			this->Materia[i] = NULL;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &Copy)
{
	if (this != &Copy)
	{
		for (int i = 0; i < 4; i++)
		{	
			AMateria *tmp = Copy.GetMateria(i);
			if (tmp != NULL)
				this->Materia[i] = tmp->Clone();
			else
				this->Materia[i] = NULL;
		}
	}
	return (*this);
}

AMateria * MateriaSource::GetMateria(int Index) const
{
	return(this->Materia[Index]);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] != NULL)
			delete this->Materia[i];
	}
}

void MateriaSource::LearnMateria(AMateria *Materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] == NULL)
		{
			this->Materia[i] = Materia;
			break ;
		}
	}
}

AMateria * MateriaSource::CreateMateria(std::string const &Type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] != NULL && (this->Materia[i]->GetType() == Type))
			return (this->Materia[i]);
		}
	return (0);
}
