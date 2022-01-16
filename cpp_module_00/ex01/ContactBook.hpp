#ifndef CPP_MODULES_CONTACTBOOK_H
#define CPP_MODULES_CONTACTBOOK_H

#include <iostream>
#include "PhoneBook.hpp"

class	ContactBook
{
	private: 
			Contact	contacts[7];
//			std::string	tmp;

	public: 
			void		add_contact();
			void		search_contact();
			std::string input_data(std::string what_need);
			std::string line_truncation(std::string str);
};

#endif