/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:29:28 by sclam             #+#    #+#             */
/*   Updated: 2022/05/17 14:40:11 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	Bureaucrat *test1 = nullptr;
	try {
		test1 = new Bureaucrat("test1", 151);
		std::cout << test1->getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	if (test1)
		std::cout << test1->getName() << std::endl;
	Bureaucrat test2 = Bureaucrat("test2", 150);
	std::cout << test2.getName() << std::endl;
	try {
		test2.decrGrade();
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat test3("test3", 1);
	std::cout << test3.getName() << std::endl;
	try {
		test3.incrGrade();
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
