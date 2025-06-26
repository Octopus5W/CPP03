/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:11:39 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/26 23:41:10 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
	: ClapTrap("ScavTrap Default"), gardMode(false) {
	std::cout << "ScavTrap " << name << " created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) 
	: ClapTrap(name), gardMode(false) {
	std::cout << "ScavTrap " << name << " created with parameterized constructor." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
	: ClapTrap(other), gardMode(other.gardMode) {
	std::cout << "ScavTrap " << name << " created with copy constructor." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)
		gardMode = other.gardMode;
	std::cout << "ScavTrap " << name << " assigned using assignment operator." << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destroyed." << std::endl;
}

void ScavTrap::guardGate() {
	if (hitPoints > 0 && gardMode == false) 
	{
		gardMode = true;
		std::cout << "ScavTrap " << name << " is now in guard mode." << std::endl;
	} 
	else if (hitPoints > 0 && gardMode == true) 
		std::cout << "ScavTrap " << name << " is already in guard mode." << std::endl;
	else 
		std::cout << "ScavTrap " << name << " cannot enter guard mode: he is dead." << std::endl;
}