/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:48:13 by sclam             #+#    #+#             */
/*   Updated: 2022/05/13 15:29:05 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int damage;
public:
	ClapTrap( void );
	ClapTrap( std::string name );
	~ClapTrap( void );
	ClapTrap( const ClapTrap& other );
	ClapTrap& operator=( const ClapTrap& other );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
protected:
	void setHitPoints( unsigned int hp );
	void setEnergyPoints( unsigned int ep );
	void setDamage( unsigned int damage );
	void setName( std::string name );
	unsigned int getHitPoints( void ) const;
	unsigned int getEnergyPoints( void ) const;
	unsigned int getDamage( void ) const;
	std::string getName( void ) const;
};

#endif /*CLAPTRAP_HPP*/
