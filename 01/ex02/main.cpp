/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:39:22 by sclam             #+#    #+#             */
/*   Updated: 2022/05/08 16:52:27 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string &strREF = str;
	std::string *strPTR;

	strPTR = &str;
	std::cout << &str << " address of string " << std::endl;
	std::cout << &strPTR << " address of string pointer" << std::endl;
	std::cout << &strREF << " address of string reference" << std::endl;

	std::cout << str << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;
}
