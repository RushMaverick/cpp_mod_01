#include "harl.hpp"

int main (int argc, char **argv) {
	if (argc <= 1) {
		std::cout << "You need to give me something to work with." << std::endl;
		return 1;
	}
	Harl harl;

	harl.complain(argv[1]);

	return 0;
}