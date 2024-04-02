#pragma once

#include <string>
#include <iostream>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define NC "\e[0m"

class	ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void 	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		void	setAttackDamage(int amount);
		int		getAttackDamage();
		std::string	getName();
		int			getHitPoints();
		int			getEnergyPoints();
	private:
		std::string	_name;
		int 		_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};