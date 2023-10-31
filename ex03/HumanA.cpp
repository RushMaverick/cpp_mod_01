#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){

}

HumanA::~HumanA() {

}

HumanA &HumanA::operator=(const HumanA &other){
	_name = other._name;
	_weapon = other._weapon;
	return (*this);
}

HumanA::HumanA(const HumanA &other) : _weapon(other._weapon) {
	*this = other;
}
