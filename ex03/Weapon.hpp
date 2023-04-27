/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:56:10 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/11 15:56:10 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
	private:

	std::string	type;

	public:

	Weapon( void );
	Weapon( std::string weaponType );
	~Weapon( void );
	const	std::string getType( void );
	void	setType( std::string newType );

};

#endif