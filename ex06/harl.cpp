#include "harl.hpp"

void Harl::_debug(void) {
	std::cout
	<< "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!"
	<< std::endl;
}

void Harl::_info(void) {
	std::cout
	<< "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}
void Harl::_warning(void) {
	std::cout
	<< "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
		<< std::endl;
}
void Harl::_error(void) {
	std::cout << 
		"[ERROR] This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

Harl::Harl() {
}

Harl::~Harl() {

}

void Harl::complain(std::string msg) {

	switch ((this->_enumerator(msg))) {
		case DEBUG:{
			this->_debug();
		}
		case INFO:{
			this->_info();
		}
		case WARNING:{
			this->_warning();
		}
		case ERROR:{
			this->_error();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int Harl::_enumerator (std::string msg) {
	std::string lvls[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++) {
		if ((msg.compare(lvls[i])) == 0) {
			return (i);
		}
	}
	return (-1);
}
