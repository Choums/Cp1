/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:58:41 by root              #+#    #+#             */
/*   Updated: 2022/10/31 18:26:16 by chaidel          ###   ########.fr       */
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
	if ((c >= 9 && c <= 13) || c == 32)
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
	size_t		pos;

	do
	{
		word.clear();
		getword(word, ifs);
		if (word.find(s1) != std::string::npos)
		{
			pos = word.find(s1);
			word.erase(pos, s1.size());
			word.insert(pos, s2);
		}
		else if (word.find(s2) != std::string::npos)
		{
			pos = word.find(s2);
			word.erase(pos, s2.size());
			word.insert(pos, s1);
		}
		ofs << word;
	} while (!word.empty());	
	ifs.close();
	ofs.close();
	return (0);
}