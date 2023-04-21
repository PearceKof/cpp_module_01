/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:58:44 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/10 14:58:44 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : name("no name")
{
	std::cout << "constructor called" << std::endl;
}

Zombie::Zombie( std::string s ) : name(s)
{
	std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "destructor called" << std::endl;
	std::cout << this->name << ": destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string s )
{
	this->name = s;
}
