/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:16:35 by sclam             #+#    #+#             */
/*   Updated: 2022/05/14 16:55:14 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ) {
	std::cout << "Diamond trap def constructor" << std::endl;
	this->name = this->getName();
	std::string tmp = name;
	this->setName(tmp.append("_clap_name"));
	this->setDamage(FragTrap::dmg());
	this->setEnergyPoints(ScavTrap::energy());
	return;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "Diamond trap constructor" << std::endl;
	this->name = name;
	this->setName(name.append("_clap_name"));
	this->setDamage(FragTrap::dmg());
	this->setEnergyPoints(ScavTrap::energy());
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) {
	std::cout << "Diamond copy constuctor called" << std::endl;
	*this = other;
	return;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other ) {
	std::cout << "Diamond assignment operator called" << std::endl;
	if (this != &other) {
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setDamage(other.getDamage());
	}
	return *this;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Diamond trap destructor" << std::endl;
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap - " << name << std::endl;
	std::cout << "ClapTrap - " << this->getName() << std::endl;
}
