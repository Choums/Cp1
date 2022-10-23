/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:56:16 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/23 15:56:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_wpn->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wpn)
{
	this->_wpn = &wpn;
}