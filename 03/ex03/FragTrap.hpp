/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:29:51 by sclam             #+#    #+#             */
/*   Updated: 2022/05/13 15:34:28 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public virtual ClapTrap {
public:
	FragTrap( void );
	FragTrap( std::string name );
	~FragTrap();
	FragTrap( const FragTrap& other );
	FragTrap& operator=( const FragTrap& other );

	void highFivesGuys( void );
protected:
	static unsigned int dmg(void);
	static unsigned int energy(void);
};

#endif /*FRAGTRAP_HPP*/
