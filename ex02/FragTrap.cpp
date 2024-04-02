#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "(FragTrap) Default constructor called" << std::endl;
	_name = "Unknown";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "(FragTrap) Constructor with parameters called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "(FragTrap) Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << RED << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << NC << std::endl;
		std::cout << "FragTrap " << _name << " it has " << _energyPoints << " energy points remaining." << std::endl;
	}
	else
		std::cout << "*** FragTrap " << _name << " doesn't have energy to make an attack." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FragTrap " << _name << " smiles and raises his hand, preparing to high-five everyone present!" << NC << std::endl;
}
