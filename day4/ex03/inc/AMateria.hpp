/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 13:56:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/05 19:08:40 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class AMateria
{
	protected:
		AMateria(void);
		std::string Type;
		
	public:
		AMateria(std::string const &Type);
		AMateria(const AMateria &Copy);
		~AMateria(void);

		std::string const & GetType() const; //Returns the materia type
		virtual AMateria* Clone() const = 0;
		virtual void Use(ICharacter &Target);
};

#endif