/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:45:38 by sclam             #+#    #+#             */
/*   Updated: 2022/05/11 19:07:53 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(Fixed(0)), y(Fixed(0)) {
	return;
}

Point::Point( const float x, const float y ) : x(Fixed(x)), y(Fixed(y)) {
	return;
}

Point::Point( const Point& other ) : x(Fixed(other.x)), y(Fixed(other.y)) {
	return;
}

Point& Point::operator=( const Point& other ) {
	this->x.setRawBits(other.x.getRawBits());
	this->y.setRawBits(other.y.getRawBits());
	return *this;
}

Point::~Point() {
	return;
}

const Fixed Point::getX() const {
	return x;
}

const Fixed Point::getY() const {
	return y;
}
