#ifndef WEAPONHPP
#define WEAPONHPP

#include <iostream>

class Weapon {
	private:
		std::string _type;

	public:
		const std::string& getType() const;
		void setType(const std::string& newType);
		Weapon(std::string name);
		~Weapon();
};
#endif
