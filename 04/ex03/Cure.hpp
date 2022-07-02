/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:44:46 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 16:06:51 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure( void );
	virtual ~Cure( void );
	Cure( const Cure& other );
	Cure& operator=( const Cure& other );
	AMateria* clone( void ) const;
	virtual void use( ICharacter& target );
};

#endif /*CURE_H*/
