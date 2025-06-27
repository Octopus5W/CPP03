/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:11:39 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/27 18:07:43 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
	: ClapTrap("ScavTrap Default"), gardMode(false) 
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) 
	: ClapTrap(name), gardMode(false) 
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " created with parameterized constructor." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
	: ClapTrap(other), gardMode(other.gardMode)
{
	std::cout << "ScavTrap " << this->name << " created with copy constructor." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		this->gardMode = other.gardMode;
	}
	std::cout << "ScavTrap " << this->name << " assigned using assignment operator." << std::endl;
	return *this;
}
ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap " << this->name << " destroyed." << std::endl;
}

void ScavTrap::guardGate() 
{
	if (this->hitPoints > 0 && this->gardMode == false) 
	{
		this->gardMode = true;
		std::cout << "ScavTrap " << this->name << " is now in guard mode." << std::endl;
	} 
	else if (this->hitPoints > 0 && this->gardMode == true) 
		std::cout << "ScavTrap " << this->name << " is already in guard mode." << std::endl;
	else 
		std::cout << "ScavTrap " << this->name << " cannot enter guard mode: he is dead." << std::endl;
}