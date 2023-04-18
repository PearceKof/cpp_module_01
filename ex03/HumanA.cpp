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
# include "Weapon.hpp"
# include <string>
# include <iostream>

HumanA::HumanA( std::string humanName, Weapon &weapon ) : name(humanName), weaponType(weapon)
{
}

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->weaponType.getType() << std::endl;
}