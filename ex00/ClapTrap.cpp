#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	_name = "Unknown";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with parameters called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << RED << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << NC << std::endl;
		std::cout << "ClapTrap " << _name << " it has " << _energyPoints << " energy points remaining." << std::endl;
	}
	else
		std::cout << "*** ClapTrap " << _name << " doesn't have energy to make an attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		if (_hitPoints <= 0)
			std::cout << RED << "*** ClapTrap " << _name << " has taken " << amount << " damage and is dead!" << NC << std::endl;
		else
		{
			std::cout << RED << "ClapTrap " << _name << " has taken " << amount << " damage!" << NC << std::endl;
			std::cout << GREEN << "ClapTrap " << _name << " still has " << _hitPoints << " health points." << NC << std::endl;
		}
	}
	else
		std::cout << YELLOW << "*** ClapTrap " << _name << " is already dead." << NC << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << GREEN << "ClapTrap " << _name << " is repaired " << amount << " health. For a total of " << _hitPoints << " health points." << NC << std::endl;
		std::cout << "ClapTrap " << _name << " have " << _energyPoints << " energy points remaining." << std::endl;
	}
	else
		std::cout << "*** ClapTrap " << _name << " doesn't have energy to be repaired." << std::endl;
}

void	ClapTrap::setAttackDamage(int amount)
{
	if (amount >= 0)
	{
		_attackDamage = amount;
		std::cout << GREEN << _name << " changes his attack damage to " << _attackDamage << " points!" << NC << std::endl;
	}
	else
		std::cout << RED << "Invalid value for attack damage" << NC << std::endl;
}

int		ClapTrap::getAttackDamage()
{
	return (_attackDamage);
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

int		ClapTrap::getHitPoints()
{
	return (this->_hitPoints);
}

int		ClapTrap::getEnergyPoints()
{
	return (this->_energyPoints);	
}