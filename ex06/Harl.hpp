/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:55:36 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/21 15:55:36 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_H
# define Harl_H

# include <string>
# include <iostream>

class Harl
{
	private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	public:

	Harl( void );
	~Harl( void );
	void	complain( std::string level );

};

#endif