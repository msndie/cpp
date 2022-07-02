/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:17:31 by sclam             #+#    #+#             */
/*   Updated: 2022/05/19 20:54:24 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <climits>

class Converter {
private:
	bool _isCharPossible;
	double _raw;
public:
	Converter( void );
	~Converter();
	Converter( const Converter& other );
	Converter& operator=( const Converter& other );

	void convert( std::string str );
	void printCharRepresentation( void );
	void printIntRepresentation( void );
	void printFloatRepresentation( void );
	void printDoubleRepresentation( void );
};

#endif /*CONVERTER_H*/
