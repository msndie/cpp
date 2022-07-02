/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:35:08 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:09:49 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( std::string type ) : type(type) {
	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( void ) : type("animal") {
	std::cout << "Animal def constructor called" << std::endl;
}

Animal::Animal( const Animal& other ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
	return;
}

Animal& Animal::operator=( const Animal& other ) {
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Animal::makeSound( void ) const {
	std::cout << "*** Undefined animal sounds ***" << std::endl;
	return;
}

std::string Animal::getType( void ) const {
	return this->type;
}
