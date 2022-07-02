/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:24:20 by sclam             #+#    #+#             */
/*   Updated: 2022/05/11 19:08:33 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
private:
	Fixed x;
	Fixed y;
public:
	Point( void );
	Point( const float x, const float y );
	Point( const Point& other );
	Point& operator=( const Point& other );
	~Point();

	const Fixed getX() const;
	const Fixed getY() const;
};
