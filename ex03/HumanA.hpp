#ifndef HUMANAHPP
#define HUMANAHPP

#include <iostream>
#include "Weapon.hpp"
class HumanA {
	private:
		std::string _name;
		Weapon& _weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		HumanA &operator=(const HumanA &other);
		HumanA(const HumanA &other);
		void attack();
};

#endif
