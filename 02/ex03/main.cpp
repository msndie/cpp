/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:03:04 by sclam             #+#    #+#             */
/*   Updated: 2022/05/11 19:36:25 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(2, 5);
	Point b(5, 0);
	Point c(2, -4);
	float	x = 3;
	float	y = 3;
	std::cout << bsp(a, b, c, Point(x, y)) << std::endl;
	return 0;
}