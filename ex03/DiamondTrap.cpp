/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:22:47 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/28 13:00:15 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ScavTrap("DiamondTrap_Default"), FragTrap("DiamondTrap_Default"), name("DiamondTrap_Default")
{
	this->clap_name = ClapTrap::name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ScavTrap(name), FragTrap(name), name(name)
{
	this->clap_name = ClapTrap::name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " created with parameterized constructor." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ScavTrap(other), FragTrap(other), name(other.name)
{
	this->clap_name = other.clap_name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "DiamondTrap " << this->name << " created with copy constructor." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "DiamondTrap " << this->name << " assigned using assignment operator." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destroyed." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (this->hitPoints == 0)
		std::cout << "I am " << this->name << ", my ClapTrap name is " << clap_name << " and I'm dead." << std::endl;
	else
		std::cout << "I am " << this->name << " and my ClapTrap name is " << clap_name << "." << std::endl;
}