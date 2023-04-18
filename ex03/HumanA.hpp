/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:39:38 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/11 16:39:38 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
	public :

	HumanA( std::string humanName, Weapon &weapon );
	void	attack() const;

	private :

	std::string	name;
	Weapon		&weaponType;

};

#endif