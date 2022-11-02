/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:58:41 by root              #+#    #+#             */
/*   Updated: 2022/11/02 17:02:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

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
	if (!ifs.is_open())
	{
		std::cout << "Error\nInvalid file" << std::endl;
		return (1);
	}
	file.append(".replace");
	std::ofstream	ofs(file.c_str());
	/*----	Init done	----*/
	/*----	Get stream	----*/
	std::string	word;

	do
	{
		word.clear();
		getword(word, ifs);
		replace(word, s1, s2);
		ofs << word;
	} while (!word.empty());
	ifs.close();
	ofs.close();
	return (0);
}