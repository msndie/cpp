/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:06:01 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:48:16 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	std::cout << "--------------------------" << std::endl;
	const WrongAnimal* animal = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	const WrongCat* normalCat = new WrongCat();
	std::cout << animal->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << normalCat->getType() << " " << std::endl;
	animal->makeSound();
	cat->makeSound();
	normalCat->makeSound();
	delete cat;
	delete animal;
	delete normalCat;
	return 0;
}