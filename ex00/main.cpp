#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Chaku("Chaku");
    ClapTrap    Trorioll("Trorioll");

    std::cout << YELLOW << "Chaku and Trorioll are training their skills in C++" << NC << std::endl;
    std::cout << YELLOW << "Chaku is an expert in the arts of recursivity and efficiency code" << NC << std::endl;
    std::cout << "Name: " << Chaku.getName() << std::endl;
    std::cout << "HitPoints: " << Chaku.getHitPoints() << std::endl;
    std::cout << "EnergyPoints: " << Chaku.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage: " << Chaku.getAttackDamage() << std::endl;
    std::cout << YELLOW << "Trorioll masters the shortcuts of Vim like no one.." << NC << std::endl;
    std::cout << "Name: " << Trorioll.getName() << std::endl;
    std::cout << "HitPoints: " << Trorioll.getHitPoints() << std::endl;
    std::cout << "EnergyPoints: " << Trorioll.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage: " << Trorioll.getAttackDamage() << std::endl;
    Trorioll.setAttackDamage(9);
    std::cout << YELLOW << "Trorioll punches Chaku's face with no reason!" << NC << std::endl;
    Trorioll.attack("Chaku");
    Chaku.takeDamage(Trorioll.getAttackDamage());
    std::cout << YELLOW << "After this wild attack, Chaku enters in ENRAGE and counterattacks Trorioll with fast and furious punches: " << NC << std::endl;
    Chaku.setAttackDamage(2);
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    Chaku.attack(Trorioll.getName());
    Trorioll.takeDamage(Chaku.getAttackDamage());
    std::cout << YELLOW << "After those savage attacks, Chaku is exhausted and tries to recover.." << NC << std::endl;
    Chaku.beRepaired(10);    
    
    return (0);
}