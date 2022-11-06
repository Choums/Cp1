/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:50:39 by root              #+#    #+#             */
/*   Updated: 2022/11/06 18:35:03 by root             ###   ########.fr       */
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
	harl.complain(str);

}