#include "sed.hpp"

int main (int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Too few arguments. >> (<filename>, stringToReplace, stringToReplaceWith)" << std::endl;
		return 0;
	}
	std::ifstream inFile(argv[1]);
	if (!inFile) {
		std::cout << "Error opening file. Check filename and try again." << std::endl;
		return 0;
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	size_t index = 0;
	size_t pos = 0;
	std::ofstream outFile(argv[1] + std::string(".replace"));
	if (!outFile) {
		std::cout << "Error opening file. Check filename and try again." << std::endl;
		return 0;
	}
	while (std::getline(inFile, line)) {
		if (index == line.find(s1, pos) != std::string::npos) {
			line.erase(index, s1.length());
			line.insert(index, s2);
			pos = index + s2.length();
		}
			outFile << line << std::endl;
	}
	std::cout << line << std::endl;
	inFile.close();
	outFile.close();

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