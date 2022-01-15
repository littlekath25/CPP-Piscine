/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 15:15:55 by kfu           #+#    #+#                 */
/*   Updated: 2022/01/12 18:07:39 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		CheckLevel(std::string Complaint)
{
	if (Complaint == "DEBUG")
		return (DEBUG);
	else if (Complaint == "INFO")
		return (INFO);
	else if (Complaint == "WARNING")
		return (WARNING);
	else if (Complaint == "ERROR")
		return (ERROR);
	return (-1);
}

int		main(int argc, char **argv)
{
	Karen 		Jessica;
	std::string	Complaint;

	if (argc == 2)
	{
		Complaint = argv[1];
		switch(CheckLevel(Complaint))
		{
			case DEBUG:
				Jessica.Complain("DEBUG");
				break ;
			case INFO:
				Jessica.Complain("INFO");
				break ;
			case WARNING:
				Jessica.Complain("WARNING");
				break ;
			case ERROR:
				Jessica.Complain("ERROR");
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}
