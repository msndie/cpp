/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:49:31 by sclam             #+#    #+#             */
/*   Updated: 2022/05/08 16:17:45 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : weapon(nullptr), name(name) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their ";
	if (weapon)
		std::cout << weapon->getType() << std::endl;
	else
		std::cout << "... wait what?" << std::endl;
	return;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
