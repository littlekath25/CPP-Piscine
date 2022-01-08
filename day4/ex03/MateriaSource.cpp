/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/07 13:15:34 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/08 13:30:44 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &Copy)
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