/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:56:02 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/11 15:56:02 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weaponType ) : type(weaponType)
{
	std::cout << "Weapon: constructor called" << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon: destructor called" << std::endl;
}

const	std::string Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType( std::string newType )
{
	this->type = newType;
}