/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:55:45 by sclam             #+#    #+#             */
/*   Updated: 2022/05/13 15:28:55 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) 
	: name("empty"),
	  hitPoints(100),
	  energyPoints(10),
	  damage(0) {
	std::cout << "Default constuctor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string name )
	: name(name),
	  hitPoints(100),
	  energyPoints(10),
	  damage(0) {
	std::cout << "Constuctor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destuctor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	std::cout << "Copy constuctor called" << std::endl;
	*this = other;
	return;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->damage = other.damage;
	}
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	if (hitPoints == 0) {
		return;
	} else if (energyPoints == 0) {
		std::cout << "Not enough energy" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " attacks " << target
				<< ", causing " << damage << " points of damage!" << std::endl;
		--energyPoints;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (hitPoints == 0) {
		return;
	} else {
		if (amount > hitPoints) {
			hitPoints = 0;
		} else {
			hitPoints -= amount;
		}
		std::cout << "ClapTrap " << name << " taking " << amount
				<< " points of damage! HP now equals to " << hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (hitPoints == 0) {
		return;
	} else if (energyPoints == 0) {
		std::cout << "Not enough energy" << std::endl;
	} else {
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " being repaired by " << amount
				<< " HP! HP now equal to " << hitPoints << std::endl;
		--energyPoints;
	}
}

void ClapTrap::setHitPoints( unsigned int hp ) {
	this->hitPoints = hp;
}

void ClapTrap::setEnergyPoints( unsigned int ep ) {
	this->energyPoints = ep;
}

void ClapTrap::setDamage( unsigned int damage ) {
	this->damage = damage;
}

void ClapTrap::setName( std::string name ) {
	this->name = name;
}

unsigned int ClapTrap::getHitPoints( void ) const {
	return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints( void ) const {
	return energyPoints;
}

unsigned int ClapTrap::getDamage( void ) const {
	return damage;
}

std::string ClapTrap::getName( void ) const {
	return name;
}
