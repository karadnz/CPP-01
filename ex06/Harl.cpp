/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:53:46 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/30 03:49:02 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level )
{

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	switch (std::find(levels, levels + 4, level) - levels)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
	
	default:
		break;
	}
	
}

void Harl::debug( void )
{
	std::cout << "debug" << std::endl;
}
void Harl::info( void )
{
	std::cout << "info" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "warning" << std::endl;
}
void Harl::error( void )
{
	std::cout << "error" << std::endl;
}