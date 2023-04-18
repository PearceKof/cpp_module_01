/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:57:25 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/10 14:57:25 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
	public :

	Zombie( void );
	Zombie(std::string s);
	~Zombie( void );
	void	announce( void );
	void	setName( std::string name );

	private :

	std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif