/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:30:44 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 17:34:50 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *_arr[4];
public:
	MateriaSource( void );
	~MateriaSource( void );
	MateriaSource( const MateriaSource& other );
	MateriaSource& operator=( const MateriaSource& other );
	void learnMateria( AMateria* );
	AMateria* createMateria( std::string const & type );
};

#endif /*MATERIASOURCE_H*/