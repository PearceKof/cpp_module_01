/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:56:20 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/21 15:56:20 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "constructor called" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "destructor called" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info( void )
{
	std::cout << "info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "warning: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "error:  This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void	(Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i(0);

	while (level.compare(levels[i]) and i < 4)
		i++;
	if (i < 4)
		(this->*f[i])();
}
