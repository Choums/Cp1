/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:34:45 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 11:39:11 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*newZ = new Zombie(name);
	return (newZ);	
}