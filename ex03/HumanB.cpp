/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:38:51 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/11 17:38:51 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string humanName ) : name(humanName), weaponType(NULL)
{
	std::cout << "HumanB: constructor called" << std::endl;
}

HumanB::HumanB( std::string humanName, Weapon *weapon ) : name(humanName), weaponType(weapon)
{
	std::cout << "HumanB: constructor called" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << "HumanB: destructor called" << std::endl;
}

void	HumanB::attack( void ) const
{
	if (this->weaponType)
		std::cout << this->name << " attacks with their " << this->weaponType->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fist" << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weaponType = &weapon;
}