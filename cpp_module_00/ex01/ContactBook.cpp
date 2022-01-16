#include "ContactBook.hpp"

void ContactBook::add_contact(){
	static int	i = -1;
	if (i < 7)
		i++;
	else 
		i = 0;
	contacts[i].set_first_name(ContactBook::input_data("first name"));
	contacts[i].set_last_name(ContactBook::input_data("last name"));
	contacts[i].set_nickname(ContactBook::input_data("nickname"));
	contacts[i].set_phone_number(ContactBook::input_data("phone number"));
	contacts[i].set_darkest_secret(ContactBook::input_data("darkest secret"));
}

std::string ContactBook::input_data(std::string what_need)
{
	std::string tmp;

	while (tmp.empty())
	{
		std::cout << "please, enter the "<< what_need
		<< std::endl;
		std::getline(std::cin, tmp);
		if (tmp.empty())
			std::cout << what_need << " cannot be empty\n";
	}
	return (tmp);
}

void	ContactBook::search_contact(){
	std::string	input_id;
	int			in_id;
	int			i = 0;
	while (i < 8 && !contacts[i].get_first_name().empty()){
		std::cout << (i + 1) << ":| " << line_truncation(contacts[i].get_first_name())
		<< "| " << line_truncation(contacts[i].get_last_name()) << "| "
		<< line_truncation(contacts[i].get_nickname()) <<  "|\n";
		i++;
	}
	std::cout << "please, enter the id\n";
	std::getline(std::cin, input_id);
	in_id = std::stoi(input_id) - 1;
	if (in_id + 1 > 8 || in_id + 1 < 1){
		std::cout << "There can only be 8 contacts\n";
		search_contact();
	}
	else {
		if (contacts[in_id].get_first_name().empty())
			std::cout << "No contact\n";
		else
		std::cout << (in_id + 1) << ":\nFirst name:     "
					<< contacts[in_id].get_first_name() + "\n"
					<< "Last name:      "
					<< contacts[in_id].get_last_name() + "\n"
					<< "Nickname:       "
					<< contacts[in_id].get_nickname() + "\n"
					<< "Phone number:   "
					<< contacts[in_id].get_phone_number() + "\n"
					<< "Darkest secret: "
					<< contacts[in_id].get_darkest_secret() + "\n";
	}
}

std::string ContactBook::line_truncation(std::string str){
	std::string	tmp;
	int i = (int)(10 - str.length());

	if (str.length() > 10)
		tmp = str.substr(0, 9) + ".";
	else {
		while (i-- > 0)
			tmp += " ";
		tmp += str;
	}
	return (tmp);
}