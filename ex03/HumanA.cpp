/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:39:29 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/11 16:39:29 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string humanName, Weapon &weapon ) : name(humanName), weaponType(weapon)
{
	std::cout << "constructor called" << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << "destructor called" << std::endl;
}

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->weaponType.getType() << std::endl;
}