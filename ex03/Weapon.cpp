#include "Weapon.hpp"

const std::string& Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(const std::string& newType) {
	this->_type = newType;
}

Weapon::Weapon() {
	_type = "Club";
}

Weapon::~Weapon() {
	
}