/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 17:35:52 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/12 18:42:32 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:
		std::string Ideas[100];

	public:
		Brain(void);
		Brain(const Brain &Copy);
		~Brain(void);
		Brain &operator= (const Brain &Copy);
		std::string GetBrain(int index) const;
};

#endif
