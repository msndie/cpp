/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:30:06 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 17:45:49 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	_arr[0] = nullptr;
	_arr[1] = nullptr;
	_arr[2] = nullptr;
	_arr[3] = nullptr;
	return;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; ++i) {
		if (_arr[i] != nullptr) {
			delete _arr[i];
		}
	}
	return;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	_arr[0]= nullptr;
	_arr[1]= nullptr;
	_arr[2]= nullptr;
	_arr[3]= nullptr;
	*this = other;
	return;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i) {
		if (this->_arr[i] != nullptr) {
			delete this->_arr[i];
		}
		this->_arr[i] = other._arr[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; ++i) {
		if (_arr[i] == nullptr) {
			_arr[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (_arr[i] != nullptr && _arr[i]->getType() == type) {
			return _arr[i]->clone();
		}
	}
	return nullptr;
}
