/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:59:03 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 17:01:34 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	
}
Weapon::~Weapon()
{
	
}
	
const std::string&	Weapon::getType(void)
{
	return (this->_type);
	
}
void				Weapon::setType(std::string type)
{
	this->_type = type;
}