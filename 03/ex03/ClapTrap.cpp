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
	: _name("empty"),
	  _hitPoints(100),
	  _energyPoints(10),
	  _damage(0) {
	std::cout << "Default constuctor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string name )
	: _name(name),
	  _hitPoints(100),
	  _energyPoints(10),
	  _damage(0) {
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
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_damage = other._damage;
	}
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	if (_hitPoints == 0) {
		return;
	} else if (_energyPoints == 0) {
		std::cout << "Not enough energy" << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << ", causing " << _damage << " points of _damage!" << std::endl;
		--_energyPoints;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (_hitPoints == 0) {
		return;
	} else {
		if (amount > _hitPoints) {
			_hitPoints = 0;
		} else {
			_hitPoints -= amount;
		}
		std::cout << "ClapTrap " << _name << " taking " << amount
				  << " points of _damage! HP now equals to " << _hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (_hitPoints == 0) {
		return;
	} else if (_energyPoints == 0) {
		std::cout << "Not enough energy" << std::endl;
	} else {
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " being repaired by " << amount
				  << " HP! HP now equal to " << _hitPoints << std::endl;
		--_energyPoints;
	}
}

void ClapTrap::setHitPoints( unsigned int hp ) {
	this->_hitPoints = hp;
}

void ClapTrap::setEnergyPoints( unsigned int ep ) {
	this->_energyPoints = ep;
}

void ClapTrap::setDamage( unsigned int damage ) {
	this->_damage = damage;
}

void ClapTrap::setName( std::string name ) {
	this->_name = name;
}

unsigned int ClapTrap::getHitPoints( void ) const {
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints( void ) const {
	return _energyPoints;
}

unsigned int ClapTrap::getDamage( void ) const {
	return _damage;
}

std::string ClapTrap::getName( void ) const {
	return _name;
}
