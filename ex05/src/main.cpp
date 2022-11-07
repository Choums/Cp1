/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:50:39 by root              #+#    #+#             */
/*   Updated: 2022/11/07 15:58:14 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Halr.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "[ Invalid number of arguments ]" << std::endl;
		return (1);
	}
	Harl	harl;
	std::string str = av[1];
	for (int i(0); str[i]; i++)
		if(!isdigit(str[i]))
		{
			std::cout << "[ Digit 0 to 3 needed ]" << std::endl;
			return (1);
		}
	harl.complain(str);

}