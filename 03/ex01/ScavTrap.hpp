/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/03 21:35:55 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/03 21:58:02 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClagTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		void guardGate();
};

# endif