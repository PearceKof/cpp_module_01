/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:38:46 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/11 17:38:46 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
	public :

	HumanB( std::string humanName );
	HumanB( std::string humanName, Weapon *weapon );
	void	attack() const;
	void	setWeapon( Weapon &weapon );

	private :

	std::string	name;
	Weapon		*weaponType;

};

#endif