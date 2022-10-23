/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:58:41 by root              #+#    #+#             */
/*   Updated: 2022/10/23 18:53:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"


bool	check_args(std::string file, std::string s1, std::string s2)
{
	if (file.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error\nEmpty arguments" <<std::endl;
		return (false);
	}
	if (!s1.compare(s2))
	{
		std::cout << "Error\ns1 and s2 are identical" <<std::endl;
		return (false);
	}
	return (true);
}

/*
 *	3 args:
 *			-> fichier	
 *			-> string s1
 * 			-> string s2
 * --------------------------------------
 * 1-	Vérif file puis créer une copie file.replace
 * 2-	Dans file.replace s1 sera remplacée par s2 et inversement
 * --------------------------------------
 * 
*/
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error\nInvalid number of arguments" << std::endl;
		return (1);
	}
	std::string	file = av[1];
	std::string	s1	= av[2];
	std::string	s2	= av[3];
	if (!check_args(file, s1, s2))
		return (1);
	std::ifstream	ifs(file.c_str());
	if (!ifs)
	{
		std::cout << "Error\nInexistant file" << std::endl;
		return (1);
	}
	file.append(".replace");
	std::ofstream	ofs(file.c_str());
	/*----	Init done	----*/
	std::string	word;
	int			num;
	char		wsp;
	while (ifs >> word >> num >> wsp)
	{
		std::cout << word << num << wsp;
	}
	std::cout << "----stop----" << std::endl;
	return (0);
}