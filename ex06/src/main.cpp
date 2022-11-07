/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:50:39 by root              #+#    #+#             */
/*   Updated: 2022/11/07 12:04:27 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Halr.hpp"

Level	option(std::string str)
{
	if (str.empty()) return (Lvl_empty);
	if (!str.compare("DEBUG")) return (Lvl1);
	if (!str.compare("INFO")) return (Lvl2);
	if (!str.compare("WARNING")) return (Lvl3);
	if (!str.compare("ERROR")) return (Lvl4);
	return (Lvl_Invalid);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error\nInvalid number of Arguments" << std::endl;
		return (1);
	}
	std::string str = av[1];
	Harl	harl;
	harl.complain(str);
	return (0);
}