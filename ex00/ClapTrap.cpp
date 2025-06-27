/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:19:01 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/27 18:15:44 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
	: name("ClapTrap Default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap " << this->name << " created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap " << this->name << " created with parameterized constructor." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
	: name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) 
{
	std::cout << "ClapTrap " << this->name << " created with copy constructor." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << this->name << " assigned using assignment operator." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap " << this->name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << " and deal " << this->attackDamage << " points of damage!"<< std::endl;
		this->energyPoints--;
	} 
	else if (hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " cannot attack: he is dead." << std::endl;
	} 
	else {
		std::cout << "ClapTrap " << this->name << " cannot attack: insufficient energy." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->hitPoints > amount) {
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! Hit points now: " << this->hitPoints << std::endl;
	} 
	else
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " is dead. NOoOb" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " points! Hit points now: " << this->hitPoints << std::endl;
	} 
	else if (this->hitPoints == 0)
		std::cout << "ClapTrap " << this->name << " cannot be repaired: he is dead." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot be repaired: insufficient energy." << std::endl;
}

int ClapTrap::getHitPoints() 
{
	return this->hitPoints;
}

int ClapTrap::getEnergyPoints() 
{
	return this->energyPoints;
}

int ClapTrap::getAttackDamage() 
{
	return this->attackDamage;
}

void ClapTrap::setHitPoints(unsigned int hit) 
{
	this->hitPoints = hit;
}

void ClapTrap::setEnergyPoints(unsigned int energy) 
{
	this->energyPoints = energy;
}

void ClapTrap::setAttackDamage(unsigned int damage) 
{
	this->attackDamage = damage;
}