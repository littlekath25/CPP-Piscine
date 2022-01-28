/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/07 13:15:37 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:12:48 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *Materia[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &Copy);
		MateriaSource &operator=(const MateriaSource &Copy);
		AMateria *GetMateria(int Index) const;
		~MateriaSource(void);

		void LearnMateria(AMateria *Materia);
		AMateria *CreateMateria(std::string const &Type);
};

#endif
