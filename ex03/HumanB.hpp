#ifndef HUMANBHPP
#define HUMANBHPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		std::string _type;
		Weapon* _weapon;
		
	public:
		void attack();
		void setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB();
		HumanB &operator=(const HumanB &other);
		HumanB(const HumanB &other);

};

#endif
