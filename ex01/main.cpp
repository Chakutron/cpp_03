#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    Adriano("Adriano");

    std::cout << YELLOW << "Chaku is victorius, but not for much time.. a wild Adriano appears and tries to RESURRECT Trorioll!" << NC << std::endl;
    Adriano.guardGate();

    std::cout << YELLOW << "Adriano skills in C++ are NULL but his attributes are out of this world, the crossfit sessions paid off!" << NC << std::endl;
    std::cout << "Name: " << Adriano.getName() << std::endl;
    std::cout << "HitPoints: " << Adriano.getHitPoints() << std::endl;
    std::cout << "EnergyPoints: " << Adriano.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage: " << Adriano.getAttackDamage() << std::endl;
    std::cout << YELLOW << "Chaku is impressed but NOT SCARED, he calls a friend for support.." << NC << std::endl;
    std::cout << YELLOW << "A shout of fury is heard in the distance! A savage battle will start shortly!!!" << NC << std::endl;
    
    return (0);
}