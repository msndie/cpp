/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:12:45 by sclam             #+#    #+#             */
/*   Updated: 2022/05/20 21:21:08 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template< typename T >
void swap( T & a, T & b ) {
	T tmp = a;

	a = b;
	b = tmp;
}

template< typename T >
T & min( T & a, T & b ) {
	return (a < b ? a : b);
}

template< typename T >
T & max( T & a, T & b ) {
	return (a > b ? a : b);
}

#endif /*WHATEVER_H*/
