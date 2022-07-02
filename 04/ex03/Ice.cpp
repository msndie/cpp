/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:34:49 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 20:11:51 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {
	return;
}

Ice::~Ice() {
	return;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	*this = other;
	return;
}

Ice& Ice::operator=(const Ice& other) {
	this->type = other.type;
	return *this;
}

AMateria* Ice::clone(void) const {
	AMateria *copy = new Ice(*this);
	return copy;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
