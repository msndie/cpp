/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:23:15 by sclam             #+#    #+#             */
/*   Updated: 2022/05/06 15:03:32 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
	return;
}

Weapon::Weapon(void) {
	return;
}

Weapon::~Weapon(void) {
	return;
}

std::string const& Weapon::getType(void) {
	std::string& ref = type;
	return ref;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
