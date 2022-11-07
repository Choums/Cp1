/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:30:54 by root              #+#    #+#             */
/*   Updated: 2022/11/07 12:14:44 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Halr.hpp"

Harl::Harl(void)
{}

Harl::~Harl(void)
{}

/*
 *	Selon l'arg. passée, la méthode appel une des 4 méthodes privées.
 *	-------
 *	Créer un tab de pointeur de 4
 *	Chaque ptr prend l'addresse d'une méthode privée
 *	
*/
void	Harl::complain(std::string level)
{
	void	(Harl::*ptr[])() = {&Harl::debug,
								&Harl::info,
								&Harl::warning,
								&Harl::error};
	Harl harl;
	switch (option(level))
	{
		case Lvl_empty:
			std::cout << "[ Complaining about nothing is soo boring ]" << std::endl;
			break;
		case Lvl_Invalid:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case Lvl1:
			(harl.*ptr[Lvl1 - 1])();
			// [[fallthrough]];
			__attribute__((fallthrough));
		case Lvl2:
			(harl.*ptr[Lvl2 - 1])();
			// [[fallthrough]];
			__attribute__((fallthrough));
		case Lvl3:
			(harl.*ptr[Lvl3 - 1])();
			// [[fallthrough]];
			__attribute__((fallthrough));
		case Lvl4:
			(harl.*ptr[Lvl4 - 1])();
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}