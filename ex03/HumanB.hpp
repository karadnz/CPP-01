/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:44:45 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 16:56:10 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string name);
	~HumanB();
	
	void	attack(void) const;
	void	setWeapon(Weapon& weapon);

	private:
	std::string _name;
	Weapon*		_weapon;
};
#endif