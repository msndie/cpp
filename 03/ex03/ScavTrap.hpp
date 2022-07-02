/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:29:51 by sclam             #+#    #+#             */
/*   Updated: 2022/05/13 15:29:32 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public virtual ClapTrap {
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	~ScavTrap();
	ScavTrap( const ScavTrap& other );
	ScavTrap& operator=( const ScavTrap& other );

	void attack( const std::string& target );
	void guardGate( void );
protected:
	static unsigned int dmg(void);
	static unsigned int energy(void);
};

#endif /*SCAVTRAP_HPP*/
