#ifndef	FILES_HPP
# define FILES_HPP

#include <iostream>
#include <cstdlib> // for std::exit()
#include <fstream> // for ifstream, ofstream, fstream

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define WHITE "\033[37m"
# define RESET "\033[0m"

/**
	* Class for fstream
	* std::ifstream	Input file stream (reading from files)
	* std::ofstream	Output file stream (writing to files)
	* std::fstream	File stream for both input and output
	* ! Common Functions
	*	open("filename", mode):	Opens a file with a specified mode
	*	close():				Closes the file
	*	is_open():				Checks if the file is open
	*	fail():					Returns true if an error occurred
	*	good():					Returns true if the stream is in a good state
	*	eof():					Returns true if end-of-file is reached
	*	clear():				Clears error flags
	* ! std::ifstream
		operator>>:							Reads formatted data from file
		getline(file, str):					Reads a line from the file into str
		read(char* buffer, size_t size):	Reads raw binary data
		seekg(position):					Moves the get pointer (read position)
		tellg():							Returns the current read position
	* ! std::ofstream (Writing to Files)
		operator<<:								Writes formatted data to file
		put(char):								Writes a single character
		write(char* buffer, size_t size):		Writes raw binary data
		flush():								Flushes the output buffer:abs
	* ! std::fstream (Reading & Writing)
		operator>>:								Reads formatted data
		operator<<:								Writes formatted data
		seekg(position):						Moves read position
		seekp(position):						Moves write position
	* ! File Open Mode
		std::ios::in							Open for reading
		std::ios::out							Open for writing (overwrites file)
		std::ios::app							Append to file (preserves content)
		std::ios::trunc							Truncate file (clear content)
		std::ios::binary						Open file in binary mode

	Example:
		std::fstream file("log.txt", std::ios::out | std::ios::app);
*/

class	Files
{
	private:
		std::ifstream	infile;
		std::ofstream	outfile;
		std::string		input_filename;
		std::string		output_filename;
		std::string		find;
		std::string		replace;

	public:
		Files(std::string filename);
		~Files();

		static	std::string		extract_filename(std::string filename);
		std::string		find_and_replace(std::string &read_line);

		// Setter
		void	setFind(std::string	newFind);
		void	setReplace(std::string	newReplace);
		void	setOutfile(std::string	p_line);

		// Getter
		bool	getFileline(std::string &read_line);
};

void	read_file_write_file(char **av);

#endif