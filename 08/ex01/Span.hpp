/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:46:11 by sclam             #+#    #+#             */
/*   Updated: 2022/05/22 16:23:16 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>

class Span {
private:
	Span( void );
	std::vector<int> _v;
	uint32_t _size;
public:
	Span( uint32_t n );
	~Span();
	Span( const Span& other );
	Span& operator=( const Span& other );

	void addNumber( int nbr );
	int shortestSpan( void ) const;
	int longestSpan( void ) const;
	void print( void ) const;
	void addRange( int bgn, int end );

	template< typename T >
	void addRange( T bgn, T end ) {
		while (bgn != end) {
			this->addNumber(*bgn);
			++bgn;
		}
	}

	template< typename T, typename G >
	void generate( T bgn, T end, G generator ) {
		while (bgn != end) {
			this->addNumber(generator());
			++bgn;
		}
	}
};

#endif /*SPAN_H*/
