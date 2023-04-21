/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:20:02 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/17 12:20:02 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# include <string>
# include <fstream>
# include <iostream>

class Sed
{
	private :

	std::string filenameToCopy;
	std::string filenameReplace;

	public :

	Sed( std::string filename );
	~Sed( void );
	void replace( std::string toFind, std::string toReplace );

};

#endif