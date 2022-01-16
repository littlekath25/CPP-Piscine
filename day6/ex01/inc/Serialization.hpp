/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serialization.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/16 18:45:53 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/16 19:36:53 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>

typedef struct Data
{
	std::string	Name;
	int			Age;
	char		Gender;
} Data;

uintptr_t Serialize(Data* ptr);
Data* Deserialize(uintptr_t raw);

#endif
