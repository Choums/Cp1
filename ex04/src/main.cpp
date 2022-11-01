/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:58:41 by root              #+#    #+#             */
/*   Updated: 2022/11/01 17:46:13 by chaidel          ###   ########.fr       */
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

bool	is_space(int c)
{
	if ((c >= 9 && c <= 13))
		return (true);
	return (false);
}

void	getword(std::string &str, std::ifstream &ifs)
{
	char	c;

	while (ifs.get(c))
	{
		if (is_space(c))
		{
			str.push_back(c);
			return ;
		}
		str.push_back(c);
	}
}

/*
 *	Cherche dans la str l'occurence donnee
 *	Une fois trouve, elle est remplacee par dans la str
*/
void	replace(std::string	&str, std::string s1, std::string s2)
{
	size_t	pos(0);
	size_t	new_pos(0);

	if (str.empty())
		return ;
	while (true)
	{
		new_pos = str.find(s1, pos);
		if (new_pos != std::string::npos)
		{
			str.erase(new_pos, s1.size());
			str.insert(new_pos, s2);
			new_pos += s2.size();
		}
		else
			return ;
		pos = new_pos + 1;
	}
}

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