#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
	std::cout << "(ScavTrap) Default constructor called" << std::endl;
	_name = "Unknown";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "(ScavTrap) Constructor with parameters called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScavTrap) Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << RED << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << NC << std::endl;
		std::cout << "ScavTrap " << _name << " it has " << _energyPoints << " energy points remaining." << std::endl;
	}
	else
		std::cout << "*** ScavTrap " << _name << " doesn't have energy to make an attack." << std::endl;
}

void    ScavTrap::guardGate()
{
	std::cout << BLUE << "ScavTrap " << _name << " enters in Gate keeper mode!" << NC << std::endl;
}
