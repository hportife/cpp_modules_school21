#include <iostream>
#include <string>
#include <fstream>

std::string my_replace(std::string not_right_str, size_t index_input, std::string inject_str, std::string removed_str)
{
	std::string returned_string;

	returned_string.insert(0, not_right_str, 0, index_input);
	returned_string.insert(returned_string.length(), inject_str);
	returned_string.insert(returned_string.length(), not_right_str, index_input + removed_str.length());
	return (returned_string);
}

int	main(int argc, char **argv)
{
	if (argc == 4) {
		std::string str1 = argv[2];
		std::string str2 = argv[3];
		std::string file_name = argv[1];
		std::ofstream outfile(file_name + ".replace");
		std::ifstream infile(file_name);
		std::string tmp_str;

		if ((!file_name.length() || !str1.length() || !str2.length())
			|| (infile.fail() || outfile.fail())) {
			std::cout << "something is wrong with the arguments\n";
			return (1);
		}
		while (getline(infile, tmp_str)) {
			while (tmp_str.find(argv[2]) != std::string::npos)
				tmp_str = my_replace(tmp_str, tmp_str.find(argv[2]), str2, str1);
			outfile << tmp_str;
			outfile << std::endl;
		}
		outfile.close();
		infile.close();
		while (1);
		return (0);
	}
	std::cout << "something is wrong with the arguments\n";
	return (1);
}

