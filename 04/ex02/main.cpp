/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:06:01 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 14:55:34 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define COUNT 10

int main() {
	// AAnimal *aanimal = new AAnimal();
	std::cout << "Basic test" << std::endl;
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	delete dog;
	delete cat;
	std::cout << "---------------------" << std::endl;
	AAnimal *animals[COUNT];

	for (size_t i = 0; i < COUNT; ++i) {
		if (i % 2) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
		animals[i]->makeSound();
		std::cout << "---------------------" << std::endl;
	}
	for (size_t i = 0; i < COUNT; ++i) {
		delete animals[i];
		std::cout << "---------------------" << std::endl;
	}
	return 0;
}