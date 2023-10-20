#include "sed.hpp"

int main (int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Too few arguments. >> (<filename>, stringToReplace, stringToReplaceWith)" << std::endl;
		return 0;
	}
	// Open argv[1] using std::ifstream inFile(argv[1])
	// if inFile fails, tell user to fuck off
	//
	// find all occurences of s1 in argv[1]
	return 0;
}

/*
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected.
*/