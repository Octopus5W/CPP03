/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:34:01 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/27 18:07:53 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() 
	: ClapTrap("FragTrap Default") 
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " created with default constructor." << std::endl;
}

FragTrap::FragTrap(const std::string& name) 
	: ClapTrap(name) 
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " created with parameterized constructor." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) 
	: ClapTrap(other)
{
	std::cout << "FragTrap " << this->name << " created with copy constructor." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) 
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "FragTrap " << this->name << " assigned using assignment operator." << std::endl;
	return *this;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap " << this->name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void) 
{
	if (this->hitPoints > 0)
		std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " cannot request a high five: he is dead." << std::endl;
}