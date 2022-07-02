/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:19:50 by sclam             #+#    #+#             */
/*   Updated: 2022/05/19 21:36:48 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <math.h>
#include <iostream>
#include <iomanip>

Converter::Converter(void) {
	_isCharPossible = false;
	_raw = 0;
	return;
}

Converter::~Converter() {
	return;
}

Converter::Converter(const Converter& other) {
	*this = other;
	return;
}

Converter& Converter::operator=(const Converter& other) {
	this->_raw = other._raw;
	this->_isCharPossible = other._isCharPossible;
	return *this;
}

void Converter::convert(std::string str) {
	_isCharPossible = false;
	_raw = std::numeric_limits<double>::quiet_NaN();
	if (str == "nanf" || str == "nan") {
		return;
	}
	if (!(str == "-inff" || str == "+inff" || str == "-inf" || str == "+inf"
		|| str == "inf" || str == "inff")) {
		for (size_t i = 0; i < str.size(); ++i) {
			if (isalpha(str[i]) && i != str.size() - 1 && str.at(i) != 'f') {
				return;
			}
		}
	}
	_raw = std::stod(str);
	if (!(_raw > CHAR_MAX || _raw < 0)) {
		_isCharPossible = true;
	}
}

void Converter::printCharRepresentation(void) {
	int casted;

	std::cout << "char: ";
	if (_isCharPossible) {
		casted = static_cast<int>(_raw);
		if (casted != 32 && isprint(casted)) {
			std::cout << "'" << static_cast<char>(casted) << "'" << std::endl;
		} else {
			std::cout << "Non displayable" << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void Converter::printIntRepresentation(void) {
	std::cout << "int: ";
	if (isnan(_raw) || _raw > INT_MAX || _raw < INT_MIN) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << static_cast<int>(_raw) << std::endl;
	}
}

void Converter::printFloatRepresentation(void) {
	float tmp;
	std::cout << "float: ";
	if (modff(_raw, &tmp) == 0) {
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_raw) << "f" << std::endl;
	} else {
		std::cout << static_cast<float>(_raw) << "f" << std::endl;
	}
}

void Converter::printDoubleRepresentation(void) {
	std::cout << "double: " << _raw << std::endl;
}
