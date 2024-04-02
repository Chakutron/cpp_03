#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap Hippo("Hippo");

    std::cout << YELLOW << "From the shadows appears Hippo, he was watching all the time but he didn't want to intervene until now.." << NC << std::endl;
    std::cout << YELLOW << "Hippo is the master of all things, he has unnatural power beyond comprehension. A god among mere mortals." << NC << std::endl;
    Hippo.whoAmI();
    std::cout << "HitPoints: " << Hippo.getHitPoints() << std::endl;
    std::cout << "EnergyPoints: " << Hippo.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage: " << Hippo.getAttackDamage() << std::endl;
    std::cout << YELLOW << "Hippo wraps himself with a powerful magic shield and casts a resurrection spell. No one is able to harm him in this state.." << NC << std::endl;
    Hippo.guardGate();
    std::cout << YELLOW << "After a few moments, Trorioll stands up full of health and energy.. Adriano cries of emotion!" << NC << std::endl;

    ClapTrap Trorioll("Trorioll");

    std::cout << YELLOW << "But without contemplation, Hippo launches an attack that instantly knocks Trorioll out!!!" << NC << std::endl;
    Hippo.attack(Trorioll.getName());
    Trorioll.takeDamage(Hippo.getAttackDamage());
    std::cout << YELLOW << "Hippo laughs and starts to dance bachata.. the rest joins him and celebrate for days!" << NC << std::endl;
    Hippo.highFivesGuys();

    return (0);
}