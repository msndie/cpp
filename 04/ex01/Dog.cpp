/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:03:46 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 14:42:14 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
	brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog::Dog(const Dog& other) : Animal("Dog") {
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	*this->brain = *other.brain;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "WOOF WOOF mthrfckr" << std::endl;
	return;
}
