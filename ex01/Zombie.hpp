/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:14:25 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/30 20:41:50 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{

public:
    Zombie();
    ~Zombie();

	void	announce( void );
	void	setName(std::string name);
		
private:
    std::string	_name;
	
	
};

Zombie*	zombieHorde( int N, std::string name );

#endif