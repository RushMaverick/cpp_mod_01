#include "HumanB.hpp"

void	HumanB::attack() {
	if (!_weapon)
		return;
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}


HumanB::HumanB(std::string name) : _name(name){
	_weapon = NULL;
}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}