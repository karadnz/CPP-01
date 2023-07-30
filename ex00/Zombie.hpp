/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:14:25 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/30 20:30:34 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{

public:
    Zombie( std::string name );
    ~Zombie();

	void	announce( void );
		
private:
    std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif