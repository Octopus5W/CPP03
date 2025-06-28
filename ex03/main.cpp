/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:18:47 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/28 13:15:20 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main( void ) {
	DiamondTrap diamondtrap("Diamondster");
	
	diamondtrap.attack("target1");
	diamondtrap.takeDamage(50);
	diamondtrap.beRepaired(3);
	diamondtrap.attack("target2");
	diamondtrap.whoAmI();
	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();
	diamondtrap.takeDamage(53);
	diamondtrap.whoAmI();
	diamondtrap.beRepaired(5);
	std::cout << std::endl;
	
	
	// FragTrap fragtrap("Fragster");
	
	// // scavtrap.guardGate();
	// fragtrap.attack("target1");
	// fragtrap.takeDamage(50);
	// fragtrap.beRepaired(3);
	// fragtrap.attack("target2");
	// fragtrap.highFivesGuys();
	// fragtrap.takeDamage(53);
	// fragtrap.highFivesGuys();
	// fragtrap.beRepaired(5);
	// std::cout << std::endl;
	
	
	// ScavTrap scavtrap("Scapotter");
	// ScavTrap scavtrap2 = scavtrap;
	
	// scavtrap2.attack("target1");
	// scavtrap2.takeDamage(50);
	// scavtrap2.beRepaired(3);
	// scavtrap2.guardGate();
	// scavtrap2.guardGate();
	// scavtrap2.attack("target2");
	// scavtrap2.takeDamage(53);
	// scavtrap2.guardGate();
	// scavtrap2.beRepaired(5);
	// std::cout << std::endl;
	
	
	// ClapTrap claptrap("Clapotter");
	
	// claptrap.attack("target1");
	// claptrap.takeDamage(9);
	// claptrap.beRepaired(3);
	// claptrap.attack("target2");
	// claptrap.takeDamage(4);
	// claptrap.beRepaired(5);
	// claptrap.guardGate();

	
	return 0;
}