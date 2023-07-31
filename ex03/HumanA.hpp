/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:42:00 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 16:48:00 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	
	void	attack(void) const;

	private:
	std::string _name;
	Weapon&		_weapon;
};
#endif