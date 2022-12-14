/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:40:08 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/23 15:45:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string wpn_name) : _type(wpn_name)
{}

Weapon::~Weapon(void)
{}

std::string const&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string value)
{
	this->_type = value;
}
