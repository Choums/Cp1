/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:56:18 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 17:59:03 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn) : _name(name), _wpn(wpn)
{}

HumanA::~HumanA()
{}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_wpn.getType() << std::endl;
}