/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:35:08 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:49:39 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( std::string type ) : type(type) {
	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( void ) : type("wrong animal") {
	std::cout << "WrongAnimal def constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
	return;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "*** Undefined wrong animal sounds ***" << std::endl;
	return;
}

std::string WrongAnimal::getType( void ) const {
	return this->type;
}
