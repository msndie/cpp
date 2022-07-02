/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:30:03 by sclam             #+#    #+#             */
/*   Updated: 2022/05/13 15:29:22 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "Default Scav constuctor called" << std::endl;
	this->setEnergyPoints(50);
	this->setDamage(20);
	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "Scav constuctor called" << std::endl;
	this->setEnergyPoints(50);
	this->setDamage(20);
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scav destuctor called" << std::endl;
	return;
}

ScavTrap::ScavTrap( const ScavTrap& other ) {
	std::cout << "Scav copy constuctor called" << std::endl;
	*this = other;
	return;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
	std::cout << "Scav assignment operator called" << std::endl;
	if (this != &other) {
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setDamage(other.getDamage());
	}
	return *this;
}

void ScavTrap::attack( const std::string& target ) {
	if (this->getHitPoints() == 0) {
		return;
	} else if (this->getEnergyPoints() == 0) {
		std::cout << "Not enough energy" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target
				<< ", causing " << this->getDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
}

void ScavTrap::guardGate( void ) {
	std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
	return;
}
