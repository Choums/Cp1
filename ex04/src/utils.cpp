/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:01:31 by root              #+#    #+#             */
/*   Updated: 2022/11/02 17:02:14 by root             ###   ########.fr       */
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

/*
 *	Lis le fichier caract. par caract.
 *	et l'ajoute à la str jusqu'au 1er whitespace (espace non compris) trouvé
*/
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
 *	Cherche dans la str l'occurence s1.
 *	Une fois trouvée, s1 est remplacée par s2.
 *	Si str est vide ou si aucune occurence s1 n'est trouvée, la fonction s'arrête.
*/
void	replace(std::string	&str, std::string s1, std::string s2)
{
	size_t	pos(0);
	size_t	new_pos(0);

	if (str.empty())
		return ;
	while ((new_pos = str.find(s1, pos)) != std::string::npos)
	{
		str.erase(new_pos, s1.size());
		str.insert(new_pos, s2);
		new_pos += s2.size();
		pos = new_pos;
	}
}
