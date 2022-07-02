/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:53:33 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:14:52 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	(void) other;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "MEOW MOEW mthrfckr" << std::endl;
	return;
}
