#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "(DiamondTrap) Default constructor called" << std::endl;
	this->_name = "Unknown";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "(DiamondTrap) Constructor with parameters called" << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(DiamondTrap) Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
	std::cout << BLUE << "Name: " << this->_name << NC << std::endl;
	std::cout << BLUE << "ClapTrap name: " << ClapTrap::_name << NC << std::endl;
}
