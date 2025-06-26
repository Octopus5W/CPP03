/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:18:47 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/26 23:46:10 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main( void ) {
	
	ScavTrap scavtrap("Scapotter");
	
	scavtrap.attack("target1");
	scavtrap.takeDamage(50);
	scavtrap.beRepaired(3);
	scavtrap.guardGate();
	scavtrap.guardGate();
	scavtrap.attack("target2");
	scavtrap.takeDamage(53);
	scavtrap.guardGate();
	scavtrap.beRepaired(5);
	
	
	ClapTrap claptrap("Clapotter");
	
	claptrap.attack("target1");
	claptrap.takeDamage(50);
	claptrap.beRepaired(3);
	claptrap.attack("target2");
	claptrap.takeDamage(53);
	claptrap.beRepaired(5);
	// claptrap.guardGate();
	
	return 0;
}