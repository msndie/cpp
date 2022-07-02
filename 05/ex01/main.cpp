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
#include "Form.hpp"
#include <iostream>

int main() {
	Bureaucrat test1("test1", 150);
	Bureaucrat test2("test2", 1);

	Form test3("test3", 150, 150);
	Form test4("test4", 1, 1);

//	try {
//		test3.beSigned(test1);
//		test3.beSigned(test1);
//		std::cout << "TRY 1" << std::endl;
//	} catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}
//	try {
//		test4.beSigned(test1);
//		std::cout << "TRY 2" << std::endl;
//	} catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}
//	try {
//		test4.beSigned(test2);
//		std::cout << "TRY 3" << std::endl;
//	} catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}

	test1.signForm(test3);
	test1.signForm(test4);

	test2.signForm(test3);
	test2.signForm(test4);
	std::cout << test1 << std::endl;
	std::cout << test3 << std::endl;
}
