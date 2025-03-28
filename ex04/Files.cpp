#include "Files.hpp"

/*
	C++ expects a const char* for the open() function but filename is a std::string.
	so need to change av[1] to a const char*
*/
Files::Files(std::string filename)
{
	input_filename = filename;
	output_filename = extract_filename(filename);
	infile.open(input_filename.c_str(), std::ios::in);
	if (!infile.is_open())
	{
		std::cerr << RED << "Error: could not open files" << RESET << std::endl;
		std::exit(1);
	}
	outfile.open(output_filename.c_str(), std::ios::out);
};

Files::~Files()
{
	if (outfile.is_open())
		outfile.close();
	if (infile.is_open())
		infile.close();
};

std::string		Files::extract_filename(std::string filename)
{
	std::string	out;
	size_t	pos;

	pos = filename.find_last_of("."); // returns std::string::npos if not found
	if (pos != std::string::npos)
	{
		out = filename.substr(0, pos);
		out.append(".replace");
	}
	else
		out = filename.append(".replace");
	return (out);
}

std::string	Files::find_and_replace(std::string &read_line)
{
	size_t	pos = 0;
	size_t	found_pos = 0;
	size_t	find_len = 0;
	std::string	copy;
	std::string	results;

	if (find.empty())
		return read_line;
	find_len = find.length();
	found_pos = read_line.find(find, pos);
	while (found_pos != std::string::npos)
	{
		copy = read_line.substr(pos, found_pos - pos); // get the string from starting index to the index of found string
		results.append(copy); // append the str to results
		results.append(replace); // append the replace str
		pos = found_pos + find_len; // add replace str len to the starting index
		found_pos = read_line.find(find, pos); // continue to find next occurence
	}
	copy = read_line.substr(pos); // Get the str behind the last occurence
	results.append(copy);  // Append words behind the last occurence
	return (results);
}

void	Files::setFind(std::string	newFind)
{
	this->find = newFind;
}

void	Files::setReplace(std::string	newReplace)
{
	this->replace = newReplace;
}

void	Files::setOutfile(std::string	p_line)
{
	outfile << p_line << "\n"; // output the line to outfile and manually assign newline
}

bool	Files::getFileline(std::string &read_line)
{
	if (std::getline(infile, read_line))
		return (true);
	else
		return (false);
}
