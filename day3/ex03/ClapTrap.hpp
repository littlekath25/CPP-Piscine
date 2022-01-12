/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:07:13 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:35:57 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string _Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string NewName);
		~ClapTrap(void);

		void Attack(std::string const & Target);
		void TakeDamage(unsigned int Amount);
		void BeRepaired(unsigned int Amount);
};

#endif
