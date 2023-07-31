/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:46:14 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 17:04:17 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) const
{
	if (this->_weapon.getType() != "")
		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	else
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}