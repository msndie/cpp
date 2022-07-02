/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:48:16 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 14:53:10 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain* brain;
public:
	Cat( void );
	virtual ~Cat( void );
	Cat( const Cat& other );
	Cat& operator=( const Cat& other );

	virtual void makeSound( void ) const;
};

#endif /*CAT_H*/
