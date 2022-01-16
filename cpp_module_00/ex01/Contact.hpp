#ifndef CPP_MODULES_CONTACT_H
#define CPP_MODULES_CONTACT_H

#include <iostream>

class Contact
{
	private: std::string	first_name;
	private: std::string	last_name;
	private: std::string	nickname;
	private: std::string	phone_number;
	private: std::string	darkest_secret;

	public: void	set_first_name(std::string f_n);
	public: void	set_last_name(std::string l_n);
	public: void	set_nickname(std::string nn);
	public: void	set_phone_number(std::string p_n);
	public: void	set_darkest_secret(std::string d_s);

	std::string		get_first_name();
	std::string		get_last_name();
	std::string		get_nickname();
	std::string		get_phone_number();
	std::string		get_darkest_secret();
};

#endif
