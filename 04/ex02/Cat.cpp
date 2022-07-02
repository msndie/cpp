/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:53:33 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 14:53:30 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : AAnimal("Cat") {
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat::Cat(const Cat& other) : AAnimal("Cat") {
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	*this->brain = *other.brain;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "MEOW MOEW mthrfckr" << std::endl;
	return;
}
