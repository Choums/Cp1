/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:30:54 by root              #+#    #+#             */
/*   Updated: 2022/11/06 19:58:28 by root             ###   ########.fr       */
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
								&Harl::warning,
								&Harl::info,
								&Harl::error};
	Harl harl;
	(harl.*ptr[atoi(level.c_str())])();
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}