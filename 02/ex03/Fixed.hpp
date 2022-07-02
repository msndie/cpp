/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:48:13 by sclam             #+#    #+#             */
/*   Updated: 2022/05/11 16:20:38 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>

class Fixed {
private:
	int value;
	static const int fract;
public:
	Fixed( void );
	~Fixed( void );
	Fixed( int const value );
	Fixed( float const value );
	Fixed( const Fixed& other );
	Fixed& operator=( const Fixed& other );
	bool operator>( const Fixed& other );
	bool operator<( const Fixed& other );
	bool operator>=( const Fixed& other );
	bool operator<=( const Fixed& other );
	bool operator==( const Fixed& other );
	bool operator!=( const Fixed& other );
	Fixed operator+( const Fixed& other );
	Fixed operator-( const Fixed& other );
	Fixed operator-( const Fixed& other ) const;
	Fixed operator*( const Fixed& other );
	Fixed operator/( const Fixed& other );
	Fixed& operator++( void );
	Fixed& operator--( void );
	Fixed operator++( int );
	Fixed operator--( int );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed& min( Fixed& a, Fixed& b );
	static const Fixed& min( const Fixed& a, const Fixed& b );
	static Fixed& max( Fixed& a, Fixed& b );
	static const Fixed& max( const Fixed& a, const Fixed& b );
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif /*FIXED_HPP*/
