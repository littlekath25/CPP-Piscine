/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/05 13:56:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/28 19:05:06 by kfu           ########   odam.nl         */
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
		AMateria &operator=(const AMateria &Copy);
		virtual ~AMateria(void);

		std::string const & GetType() const;
		virtual AMateria* Clone() const = 0;
		virtual void Use(ICharacter &Target);
};

#endif
