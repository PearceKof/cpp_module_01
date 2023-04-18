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

	std::string iFile;
	std::string oFile;

	public :

	Sed(std::string filename);
	void replace(std::string, std::string);

};

#endif