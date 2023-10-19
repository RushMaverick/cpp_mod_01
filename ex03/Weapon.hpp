#ifndef WEAPONHPP
#define WEAPONHPP

#include <iostream>

class Weapon {
	private:
		std::string _type;

	public:
		const std::string& getType() const;
		void setType(const std::string& newType);
		Weapon();
		~Weapon();
};
#endif

/*Implement a Weapon class that has:
• A private attribute type, which is a string.
• A getType() member function that returns a const reference to type.
• A setType() member function that sets type using the new one passed as parameter.*/