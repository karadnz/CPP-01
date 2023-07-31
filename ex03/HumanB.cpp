/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:51:11 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 17:04:12 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon( Weapon& weapon )
{
    this->_weapon = &weapon;
}

//https://stackoverflow.com/questions/2524870/why-dont-i-need-to-check-if-references-are-invalid-null#:~:text=However%2C%20there%20is%20no%20such,it%20won't%20be%20correct.
void HumanB::attack(void) const
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}