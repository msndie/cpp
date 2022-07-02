/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:48:13 by sclam             #+#    #+#             */
/*   Updated: 2022/05/10 14:42:18 by sclam            ###   ########.fr       */
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
	Fixed( const Fixed& other);
	Fixed& operator=( const Fixed& other );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif /*FIXED_HPP*/
