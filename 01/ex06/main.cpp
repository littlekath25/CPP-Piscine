/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:55 by kfu           #+#    #+#                 */
/*   Updated: 2021/12/01 15:24:03 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void)
{
	Karen Jessica;
	
	Jessica.complain("debug");
	Jessica.complain("info");
	Jessica.complain("warning");
	Jessica.complain("error");
	return (0);
}
