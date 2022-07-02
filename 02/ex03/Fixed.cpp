/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:55:45 by sclam             #+#    #+#             */
/*   Updated: 2022/05/11 19:19:10 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) {
	value = 0;
	return;
}

Fixed::~Fixed( void ) {
	return;
}

Fixed::Fixed( int const value ) {
	this->value = value << fract;
}

Fixed::Fixed( float const value ) {
	this->value = roundf(value * (1 << fract));
}

Fixed::Fixed( const Fixed& other) {
	this->value = other.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& other) {
	if (this != &other) {
		this->value = other.getRawBits();
	}
	return *this;
}

bool Fixed::operator>( const Fixed& other ) {
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<( const Fixed& other ) {
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=( const Fixed& other ) {
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=( const Fixed& other ) {
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==( const Fixed& other ) {
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=( const Fixed& other ) {
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator+( const Fixed& other ) {
	Fixed tmp = Fixed(this->toFloat() + other.toFloat());
	return tmp;
}

Fixed Fixed::operator-( const Fixed& other ) {
	Fixed tmp = Fixed(this->toFloat() - other.toFloat());
	return tmp;
}

Fixed Fixed::operator*( const Fixed& other ) {
	Fixed tmp = Fixed(this->toFloat() * other.toFloat());
	return tmp;
}

Fixed Fixed::operator/( const Fixed& other ) {
	Fixed tmp = Fixed(this->toFloat() / other.toFloat());
	return tmp;
}

Fixed& Fixed::operator++( void ) {
	this->value++;
	return *this;
}

Fixed& Fixed::operator--( void ) {
	this->value--;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed tmp(*this);
	this->value++;
	return tmp;
}

Fixed Fixed::operator--( int ) {
	Fixed tmp(*this);
	this->value--;
	return tmp;
}

int Fixed::getRawBits( void ) const {
	return value;
}

void Fixed::setRawBits( int const raw ) {
	value = raw;
}

float Fixed::toFloat( void ) const {
	return ((float)value / (1 << fract));
}

int Fixed::toInt( void ) const {
	return value >> fract;
}

Fixed& Fixed::min( Fixed& a, Fixed& b ) {
	return a < b ? a : b;
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b ) {
	return a.toFloat() < b.toFloat() ? a : b;
}

Fixed& Fixed::max( Fixed& a, Fixed& b ) {
	return a > b ? a : b;
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b ) {
	return a.toFloat() > b.toFloat() ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed tmp = Fixed(this->toFloat() - other.toFloat());
	return tmp;
}

const int Fixed::fract = 8;
