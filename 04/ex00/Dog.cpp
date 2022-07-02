/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:03:46 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:14:55 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	(void) other;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "WOOF WOOF mthrfckr" << std::endl;
	return;
}
