/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:34:49 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/07 12:29:42 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	Zombie zom1("first");
	Zombie zom2("second");
	
	Zombie *zom3 = newZombie("third");
	zom3->announce();

	zom2.announce();
	zom1.announce();
	delete zom3;
	return (0);
}