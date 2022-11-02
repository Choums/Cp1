/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:58:38 by root              #+#    #+#             */
/*   Updated: 2022/11/02 17:00:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_H
# define ALL_H

# include <iostream>
# include <fstream>
# include <sstream>

bool	check_args(std::string file, std::string s1, std::string s2);

bool	is_space(int c);
void	getword(std::string &str, std::ifstream &ifs);
void	replace(std::string	&str, std::string s1, std::string s2);

#endif