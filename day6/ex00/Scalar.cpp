/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/15 20:22:23 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/15 23:41:52 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(std::string Target) : _Target(Target) {}

Scalar::Scalar(const Scalar &Copy) : _Target(Copy._Target) {}

Scalar::~Scalar() {}

Scalar & Scalar::operator=(const Scalar &Copy)
{
	if (this != &Copy)
		_Target = Copy._Target;
	return (*this);
}

void	Scalar::SetTarget(std::string Target)
{
	_Target = Target;
}

std::string	Scalar::GetTarget(void)
{
	return(this->_Target);
}

char		Scalar::ConvertChar(void) const
{
	int	Tmp;
	
	try
	{
		Tmp = stoi(this->_Target);
		if (Tmp < 0 && Tmp > 255)
			throw Scalar::ImpossibleConversion();
	}
	catch(...)
	{
		throw Scalar::ImpossibleConversion();
	}
	if (!isprint(Tmp))
			throw Scalar::NonDisplayableConversion();
	return (static_cast<char>(Tmp));
}

int			Scalar::ConvertInt(void) const
{
	int	Tmp;

	try
	{
		Tmp = stoi(this->_Target);
	}
	catch(const std::exception& Exc)
	{
		throw Scalar::ImpossibleConversion();
	}
	return (Tmp);
}

float		Scalar::ConvertFloat(void) const
{
	float	Tmp;
	
	try
	{
		Tmp = stof(this->_Target);
	}
	catch(...)
	{
		throw Scalar::ImpossibleConversion();
	}
	return (Tmp);
}

double		Scalar::ConvertDouble(void) const
{
	double	Tmp;
	
	try
	{
		Tmp = stod(this->_Target);
	}
	catch(...)
	{
		throw Scalar::ImpossibleConversion();
	}
	return (Tmp);
}

std::ostream &operator<< (std::ostream &Output, const Scalar &Copy)
{
	try
	{
		char CValue;
		CValue = Copy.ConvertChar();
		std::cout << "Char : '" << CValue << "'" << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << "Char: " << Exc.what() << std::endl;
	}

	Output << "Int: ";
	try
	{
		int IValue;
		IValue = Copy.ConvertInt();
		Output << IValue << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << Exc.what() << std::endl;
	}

	Output << "Float: ";
	try
	{
		float FValue;
		FValue = Copy.ConvertFloat();
		Output << FValue;
		if (std::modf(FValue, &FValue) == 0 && !std::isinf(FValue))
			Output << ".0";
		Output << "f" << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << Exc.what() << std::endl;
	}

	Output << "Double: ";
	try
	{
		double DValue;
		DValue = Copy.ConvertDouble();
		Output << DValue;
		if (std::modf(DValue, &DValue) == 0 && !std::isinf(DValue))
			Output << ".0";
		Output << std::endl;
	}
	catch(const std::exception& Exc)
	{
		std::cerr << Exc.what() << std::endl;
	}
	return (Output);
}
