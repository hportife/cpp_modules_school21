#include "PhoneBook.hpp"

int main() {
	std::string str;
	ContactBook	contact_book;

	std::cout << "Please enter one of the available commands: ADD, SEARCH, EXIT...\n";
	while (true) {
		std::getline(std::cin, str);
		if (str == "ADD")
			contact_book.add_contact();
		else if (str == "SEARCH")
			contact_book.search_contact();
		else if (str == "EXIT") {
			std::cout << "Good Bye!\n";
			break;
		}
		std::cout << "Please enter one of the available commands: ADD, SEARCH, EXIT...\n";
	}
	return (0);
}

