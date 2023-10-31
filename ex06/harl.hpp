#ifndef HARLHPP
#define HARLHPP

#include <iostream>

enum levels {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl {
	private:
		void _debug (void);
		void _info (void);
		void _warning (void);
		void _error (void);
		int _enumerator (std::string msg);
	public:
		void complain (std::string level);
		Harl();
		~Harl();
};

#endif