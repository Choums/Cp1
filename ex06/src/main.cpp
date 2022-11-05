/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:50:39 by root              #+#    #+#             */
/*   Updated: 2022/11/05 20:30:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Halr.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "DEBUG: ";
	harl.complain("0");
	std::cout << std::endl;
	
	std::cout << "WARNING: ";
	harl.complain("1");
	std::cout << std::endl;
	
	std::cout << "INFO: ";
	harl.complain("2");
	std::cout << std::endl;

	std::cout << "ERROR: ";
	harl.complain("3");
	std::cout << std::endl;

	std::cout << "ERROR: ";
	harl.complain("3");
	std::cout << std::endl;
}