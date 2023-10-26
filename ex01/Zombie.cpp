#include "Zombie.hpp"

void Zombie::announce (void) const{
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

Zombie::Zombie() {
}

Zombie::~Zombie(){
	std::cout << this->_name << " perishes gruesomely." << std::endl;
}

Zombie::Zombie(const Zombie &other) {
	*this = other;
}

Zombie &Zombie::operator=(const Zombie &other) {
	_name = other._name;
}