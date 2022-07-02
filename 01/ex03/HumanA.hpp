/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:27:35 by sclam             #+#    #+#             */
/*   Updated: 2022/05/08 16:40:42 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
private:
	Weapon& weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void attack(void);
};

#endif /*HUMANA_HPP*/