#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	HumanB jeff;
	Weapon weapon;
	std::string newWep= "Blade of Eternal Woe and Malice";

	jeff.setWeapon(weapon);
	jeff.attack();
	weapon.setType(newWep);
	jeff.setWeapon(weapon);
	jeff.attack();
	return 0;
}
/*Now, create two classes: HumanA and HumanB. They both have a Weapon and a
name. They also have a member function attack() that displays (of course, without the
angle brackets):
<name> attacks with their <weapon type>
HumanA and HumanB are almost the same except for these two tiny details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.
8
C++ - Module 01
Memory allocation, pointers to members,
references, switch statement
If your implementation is correct, executing the following code will print an attack
with "crude spiked club" then a second attack with "some other type of club" for both
test cases:
*/