/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/15 20:22:23 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/16 17:57:27 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(std::string Literal) : _Literal(Literal) {}

Scalar::Scalar(const Scalar &Copy) : _Literal(Copy._Literal) {}

Scalar::~Scalar() {}

Scalar & Scalar::operator=(const Scalar &Copy)
{
	if (this != &Copy)
		_Literal = Copy._Literal;
	return (*this);
}

void	Scalar::SetLiteral(std::string Literal)
{
	_Literal = Literal;
}

void	Scalar::SetType(e_Type Type)
{
	_Type = Type;
}

std::string	Scalar::GetLiteral(void) const
{
	return(this->_Literal);
}

e_Type Scalar::GetType(void) const
{
	return(this->_Type);
}

e_Type		Scalar::FindType(std::string Literal) const
{
	if (Literal.length() == 1)
	{
		char C = Literal.at(0);
		if (isdigit(C))
			return (INT);
		else if (isprint(C))
			return (CHAR);
		else
			return (INVALID);
	}
	else if (Literal == "inf" || Literal == "-inf" || Literal == "nan" || Literal == "+inf" || Literal == "nanf" )
		return (DOUBLE);
	else if (Literal.length() > 3 && (Literal.at(Literal.length() - 1) == 'f'))
		return (FLOAT);
	else if (Literal.length() > 2 && (Literal.find('.') != std::string::npos))
		return (DOUBLE);
	return (INT);
}

void		Scalar::ConvertChar(void) const
{
	char Value = this->_Literal.at(0);

	std::cout << "Char: '" << Value << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(Value) << std::endl;
	std::cout << "Float: " << static_cast<float>(Value) << "f" << std::endl;
	std::cout << "Double: " << static_cast<double>(Value) << std::endl;
}

void		Scalar::ConverInt(void) const
{
	int Value = atoi(this->_Literal.c_str());

	try
	{
		if (Value < 0 || Value > 255)
			throw Scalar::ImpossibleConversion();
		if (Value < 32 || Value > 127)
			throw Scalar::NonDisplayableConversion();
		std::cout << "Char: '" << static_cast<char>(Value) <<  "'" << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << "Char: " << Exc.what() << '\n';
	}
	std::cout << "Int: " << Value << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(Value) << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(Value) << std::endl;
}

void		Scalar::ConvertFloat(void) const
{
	float Value = atof(this->_Literal.c_str());

	try
	{
		if (Value < 0 || Value > 255)
			throw Scalar::ImpossibleConversion();
		if (Value < 32 || Value > 127)
			throw Scalar::NonDisplayableConversion();
		std::cout << "Char: '" << static_cast<char>(Value) <<  "'" << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << "Char: " << Exc.what() << '\n';
	}

	try
	{
		if (Value > INT_MAX || Value < INT_MIN)
			throw Scalar::ImpossibleConversion();
		std::cout << "Int: " << static_cast<int>(Value) << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << "Int: " << Exc.what() << '\n';
	}
	std::cout << "Float: " << std::fixed << std::setprecision(1) << Value << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(Value) << std::endl;
}

void		Scalar::ConvertDouble(void) const
{
	double Value = static_cast<double>(atof(this->_Literal.c_str()));

	try
	{
		if (Value < 0 || Value > 255 || isnan(Value))
			throw Scalar::ImpossibleConversion();
		if (Value < 32 || Value > 127)
			throw Scalar::NonDisplayableConversion();
		std::cout << "Char: '" << static_cast<char>(Value) <<  "'" << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << "Char: " << Exc.what() << '\n';
	}

	try
	{
		if (isnan(Value) || Value == INFINITY || Value == -INFINITY || \
		Value == +INFINITY || Value > INT_MAX || Value < INT_MIN)
			throw Scalar::ImpossibleConversion();
		std::cout << "Int: " << static_cast<int>(Value) << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << "Int: " << Exc.what() << std::endl;
	}

	try
	{
		if (Value > __FLT_MAX__ || Value < __FLT_MIN__)
			throw Scalar::ImpossibleConversion();
		std::cout << "Float: " << static_cast<float>(Value) << "f" << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << "Float: " << std::fixed << std::setprecision(1) << Exc.what() << std::endl;
	}

	std::cout << "Double: " << std::fixed << std::setprecision(1) << Value << std::endl;
}

std::ostream &operator<< (std::ostream &Output, Scalar &Copy)
{
	Copy.SetType(Copy.FindType(Copy.GetLiteral()));
	int Type = Copy.GetType();

	switch (Type)
	{
		case (CHAR):
		{
			Copy.ConvertChar();
			break ;
		}
		case (INT):
		{
			Copy.ConverInt();
			break ;
		}
		case (FLOAT):
		{
			Copy.ConvertFloat();
			break ;
		}
		case (DOUBLE):
		{
			Copy.ConvertDouble();
			break ;
		}
		default:
			std::cout << "Invalid argument" << std::endl;
	}
	return (Output);
}
