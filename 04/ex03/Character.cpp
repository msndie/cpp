/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:50:31 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 20:26:44 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	_arr[0]= nullptr;
	_arr[1]= nullptr;
	_arr[2]= nullptr;
	_arr[3]= nullptr;
	return;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		if (_arr[i] != nullptr) {
			delete _arr[i];
		}
	}
	return;
}

Character::Character(const Character& other) {
	_arr[0]= nullptr;
	_arr[1]= nullptr;
	_arr[2]= nullptr;
	_arr[3]= nullptr;
	*this = other;
	return;
}

Character& Character::operator=(const Character& other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i) {
		if (this->_arr[i] != nullptr) {
			delete this->_arr[i];
		}
		if (other._arr[i] != nullptr)
			this->_arr[i] = other._arr[i]->clone();
	}
	_name = other._name;
	return *this;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (_arr[i] == nullptr) {
			_arr[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	_arr[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || _arr[idx] == nullptr) {
		return;
	}
	_arr[idx]->use(target);
}

std::string const &Character::getName() const {
	return _name;
}
