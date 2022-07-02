/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:30:03 by sclam             #+#    #+#             */
/*   Updated: 2022/05/14 16:56:45 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "Default Frag constuctor called" << std::endl;
	this->setDamage(FragTrap::dmg());
	this->setEnergyPoints(FragTrap::energy());
	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "Frag constuctor called" << std::endl;
	this->setDamage(FragTrap::dmg());
	this->setEnergyPoints(FragTrap::energy());
	return;
}

FragTrap::~FragTrap() {
	std::cout << "Frag destuctor called" << std::endl;
	return;
}

FragTrap::FragTrap( const FragTrap& other ) {
	std::cout << "Frag copy constuctor called" << std::endl;
	*this = other;
	return;
}

FragTrap& FragTrap::operator=( const FragTrap& other ) {
	std::cout << "Frag assignment operator called" << std::endl;
	if (this != &other) {
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setDamage(other.getDamage());
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->getName() << " - << High fives !? :) >>" << std::endl;
}

unsigned int FragTrap::dmg(void) {
	return 30;
}

unsigned int FragTrap::energy(void) {
	return 100;
}
