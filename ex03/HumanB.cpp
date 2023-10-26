#include "HumanB.hpp"

void	HumanB::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}


HumanB::HumanB(std::string name) : _name(name){
	_weapon = NULL;
}

HumanB::~HumanB() {

}

HumanB::HumanB(const HumanB &other) {
	*this = other;
}

HumanB &HumanB::operator=(const HumanB &other){
	_name = other._name;
}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}