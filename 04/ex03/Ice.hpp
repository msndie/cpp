/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:44:46 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 20:01:38 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice( void );
	virtual ~Ice();
	Ice( const Ice& other );
	Ice& operator=( const Ice& other );
	AMateria* clone( void ) const;
	virtual void use( ICharacter& target );
};

#endif /*ICE_H*/
