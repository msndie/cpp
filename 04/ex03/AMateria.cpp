/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:12:30 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 20:02:55 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) : type(type) {
	return;
}

AMateria::AMateria( const AMateria& other ) {
	*this = other;
	return;
}

AMateria& AMateria::operator=( const AMateria& other ) {
	(void) other;
	return *this;
}

void AMateria::use( ICharacter& target ) {
	(void) target;
	return;
}

std::string const & AMateria::getType( void ) const {
	return this->type;
}

AMateria::~AMateria( void ) {
	return;
}
