/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:31:30 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 14:40:45 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << "string addr:\t" << &var << std::endl;
	std::cout << "PTR addr:\t" << stringPTR << std::endl;
	std::cout << "REF addr:\t" << &stringREF << std::endl;
	
	std::cout << "string:\t\t" << var << std::endl;
	std::cout << "stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "stringREF:\t" << stringREF << std::endl;
	return (0);
}