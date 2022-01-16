#include "Contact.hpp"

void	Contact::set_first_name(std::string f_n) {
	first_name = f_n;
}
void	Contact::set_last_name(std::string l_n){
	last_name = l_n;
}
void	Contact::set_nickname(std::string nn){
	nickname = nn;
}
void	Contact::set_phone_number(std::string p_n){
	phone_number = p_n;
}
void	Contact::set_darkest_secret(std::string d_s){
	darkest_secret = d_s;
}

std::string	Contact::get_first_name(){
	return (first_name);
}

std::string	Contact::get_last_name(){
	return (last_name);
}

std::string	Contact::get_nickname(){
	return (nickname);
}

std::string	Contact::get_phone_number(){
	return (phone_number);
}

std::string	Contact::get_darkest_secret(){
	return (darkest_secret);
}