/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:45:50 by sclam             #+#    #+#             */
/*   Updated: 2022/05/20 14:14:07 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void) {
	srand(time(NULL));
	int rndm = rand() % 3;
	Base *base;

	switch (rndm) {
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;
		default:
			base = new A();
			break;
	}
	return base;
}

void identify(Base* p) {
	A* a;
	B* b;
	C* c;

	std::cout << "Actual type by pointer is: ";
	a = dynamic_cast<A*>(p);
	if (a) {
		std::cout << "A" << std::endl;
		return;
	}
	b = dynamic_cast<B*>(p);
	if (b) {
		std::cout << "B" << std::endl;
		return;
	}
	c = dynamic_cast<C*>(p);
	if (c) {
		std::cout << "C" << std::endl;
		return;
	} else {
		std::cout << "Unknown" << std::endl;
	}
}

void identify(Base& p) {
	std::cout << "Actual type by reference is: ";

	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception& e) {
	}

	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception& e) {
	}

	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception& e) {
	}
	std::cout << "Unknown" << std::endl;
}
