#include "HumanB.hpp"

void	HumanB::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}


HumanB::HumanB() {
	_weapon = NULL;
	_name = "Greg";
}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}