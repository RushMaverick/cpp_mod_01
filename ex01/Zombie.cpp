#include "Zombie.hpp"

void Zombie::announce (void) const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {

}

Zombie::~Zombie(){
	std::cout << this->_name << " perishes gruesomely." << std::endl;
}