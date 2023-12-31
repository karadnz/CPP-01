/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:48:56 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/30 03:48:57 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:

	void complain( std::string level );

	private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	
};


#endif