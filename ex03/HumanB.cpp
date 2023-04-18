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
}

HumanB::HumanB( std::string humanName, Weapon *weapon ) : name(humanName), weaponType(weapon)
{
}

void	HumanB::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->weaponType->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weaponType = &weapon;
}