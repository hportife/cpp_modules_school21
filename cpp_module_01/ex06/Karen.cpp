#include "Karen.hpp"

Karen::Karen(void){}
Karen::~Karen(void){}

void Karen::debug(void)
{
	std::cout	<< "[ DEBUG ]\n"
				<< "I love having extra bacon for my "
				   "7XL-double-cheese-triple-pickle-specialketchup "
				   "burger. I really do!\n";
}

void Karen::info(void)
{
	std::cout	<< "[ INFO ]\n"
				<< "I cannot believe adding extra bacon costs more "
				   "money. You didn’t putenough bacon in my burger! "
				   "If you did, I wouldn’t be asking for more!\n";
}

void Karen::warning(void)
{
	std::cout	<< "[ WARNING ]\n"
				<< "I think I deserve to have some extra bacon for "
				   "free. I’ve been coming foryears whereas you "
				   "started working here since last month.\n";
}

void Karen::error(void)
{
	std::cout	<< "[ ERROR ]\n"
				<< "This is unacceptable! I want to speak to the "
				   "manager now.\n";
}

void	Karen::complain(std::string level) {
	int	i = -1;
	void	(Karen::*fptr[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	bool	input[] = {level == "DEBUG", level == "INFO", level == "WARNING", level == "ERROR"};
	while(!input[++i]);
	switch (i) {
		case 0:
			(this->*fptr[0])();
		case 1:
			(this->*fptr[1])();
		case 2:
			(this->*fptr[2])();
		case 3:
			(this->*fptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}