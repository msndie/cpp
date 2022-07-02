/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:42:58 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 17:59:20 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {
private:
	AMateria *_arr[4];
	std::string _name;
public:
	Character( std::string name );
	~Character();
	Character( const Character& other );
	Character& operator=( const Character& other );
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif /*CHARACTER_H*/
