/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:35:08 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 14:52:36 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( std::string type ) : type(type) {
	std::cout << "AAnimal constructor called" << std::endl;
	return;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal( void ) : type("AAnimal") {
	std::cout << "AAnimal def constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
	return;
}

AAnimal& AAnimal::operator=( const AAnimal& other ) {
	std::cout << "AAnimal assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

std::string AAnimal::getType( void ) const {
	return this->type;
}
