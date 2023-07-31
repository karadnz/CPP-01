/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:53:46 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 19:02:34 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}
Harl::~Harl()
{
	
}

void Harl::complain( std::string level )
{
	t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*funcs[i])();
	
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