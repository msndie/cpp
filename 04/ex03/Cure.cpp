/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:28:41 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 20:11:55 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {
	return;
}

Cure::~Cure(void) {
	return;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	*this = other;
	return;
}

Cure& Cure::operator=(const Cure& other) {
	this->type = other.type;
	return *this;
}

AMateria* Cure::clone(void) const {
	AMateria *copy = new Cure(*this);
	return copy;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s woonds *" << std::endl;
}
