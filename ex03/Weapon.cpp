#include "Weapon.hpp"

const std::string& Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(const std::string& newType) {
	this->_type = newType;
}

Weapon::Weapon(std::string name) : _type(name){
}

Weapon::~Weapon() {
	
}