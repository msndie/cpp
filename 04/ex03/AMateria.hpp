/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:12:48 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 20:08:24 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string type;
public:
	virtual ~AMateria( void );
	AMateria( std::string const & type );
	AMateria( const AMateria& other );
	AMateria& operator=( const AMateria& other );
	std::string const & getType( void ) const;
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target );
};

#endif /*AMATERIA_H*/
