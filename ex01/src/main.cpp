/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:34:49 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 14:29:05 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	int		num(12);
	Zombie	*zom = zombieHorde(num, "Ghoul");
	zom[5].announce();
	zom[10].announce();
	zom[2].announce();
	zom[9].announce();
	delete [] zom;
	return (0);
}