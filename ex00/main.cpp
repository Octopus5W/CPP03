/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:18:47 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/26 22:57:35 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap claptrap("Clapotter");
	
	claptrap.attack("target1");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.attack("target2");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	
	return 0;
}