#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen 	sayer;
	if (argc != 2){
		std::cout << "Gimme something!\n";
		return 0;
	}
	sayer.complain(argv[1]);
}