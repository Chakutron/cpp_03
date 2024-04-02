#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap    Adriano("Adriano");
    FragTrap    Theouche("Theouche");

    std::cout << YELLOW << "Theouche appears with a furious leap, smashing the table with the computers. He has answered Chaku's call!" << NC << std::endl;
    std::cout << YELLOW << "Theouche finished all modules of C++.. his coding powers are unmatched!" << NC << std::endl;
    std::cout << "Name: " << Theouche.getName() << std::endl;
    std::cout << "HitPoints: " << Theouche.getHitPoints() << std::endl;
    std::cout << "EnergyPoints: " << Theouche.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage: " << Theouche.getAttackDamage() << std::endl;
    std::cout << YELLOW << "Adriano still tries to resurrect Trorioll, but Theouche quickly attacks to INTERRUPT that spell!" << NC << std::endl;
    Theouche.attack(Adriano.getName());
    Adriano.takeDamage(Theouche.getAttackDamage());
    Adriano.attack(Theouche.getName());
    Theouche.takeDamage(Adriano.getAttackDamage());
    Theouche.attack(Adriano.getName());
    Adriano.takeDamage(Theouche.getAttackDamage());
    Adriano.attack(Theouche.getName());
    Theouche.takeDamage(Adriano.getAttackDamage());
    Theouche.attack(Adriano.getName());
    Adriano.takeDamage(Theouche.getAttackDamage());
    Adriano.attack(Theouche.getName());
    Theouche.takeDamage(Adriano.getAttackDamage());
    std::cout << YELLOW << "Theouche threatens to give Adriano the COUP DE GRÂCE, but Adriano with blood and tears in his face.. SURRENDERS!" << NC << std::endl;
    Theouche.highFivesGuys();

    return (0);
}