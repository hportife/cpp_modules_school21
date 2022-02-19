#ifndef CPP_MODULE_01_KAREN_HPP
#define CPP_MODULE_01_KAREN_HPP
#include <iostream>

class Karen
{

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Karen(void);
	~Karen(void);
	void complain(std::string level);
};

#endif //CPP_MODULE_01_KAREN_HPP
