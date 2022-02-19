#include "Karen.hpp"

Karen::Karen(void){}
Karen::~Karen(void){}

void Karen::debug(void)
{
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup "
				 "burger. I really do!\n";
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more "
				 "money. You didn’t putenough bacon in my burger! "
				 "If you did, I wouldn’t be asking for more!\n";
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for "
				 "free. I’ve been coming foryears whereas you "
				 "started working here since last month.\n";
}

void Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
	int	i = -1;
	void	(Karen::*fptr[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	bool	input[] = {level == "debug", level == "info", level == "warning", level == "error"};
	while(!input[++i]);
	(this->*fptr[i])();
}