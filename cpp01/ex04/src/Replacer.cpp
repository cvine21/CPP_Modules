#include "Replacer.hpp"
#include <iostream>

Replacer::Replacer( int argc ) : argc(argc) {}

void	Replacer::error( std::string message ) {

	std::cout << "Error" << std::endl;
	std::cout << message << std::endl;

	exit(EXIT_FAILURE);

}

void	Replacer::setFilename( std::string filename ) {
	
	if (this->argc != 4)
		error("Issue with opening file to read");
	this->filename = filename;

};

void	Replacer::setToReplace( std::string toReplace ) {
	
	if (this->argc != 4)
		error("Issue with opening file to read");
	this->toReplace = toReplace;

}
void	Replacer::setReplaceWith( std::string replaceWith ) {

	if (this->argc != 4)
		error("Issue with opening file to read");
	this->replaceWith = replaceWith;

}

std::string		Replacer::getFilename( void ) {return this->filename;}

std::string		Replacer::getToReplace( void ) {return this->toReplace;};

std::string		Replacer::getReplaceWith( void ) {return this->replaceWith;}

std::ifstream	&Replacer::getInfile( void ) {return this->infile;};

std::ofstream	&Replacer::getOutfile( void ) {return this->outfile;};

void	Replacer::replaceStr( std::string *line ) {

	std::size_t		found;
	std::string		toReplace = getToReplace();
	std::string		replaceWith = getReplaceWith();

	if (toReplace == replaceWith)
		error("The lines are the same");

	while((found = (*line).find(toReplace)) != std::string::npos) {
		(*line).erase(found, toReplace.length());
		(*line).insert(found, replaceWith);
	}

}

void	Replacer::setInfile( void ) {

	this->infile.open(getFilename(), std::ifstream::in);

	if (!this->infile.is_open())
		error("Issue with opening file to read");

}

void	Replacer::setOutfile( void ) {

	this->outfile.open(getFilename().append(".replace"), std::ifstream::out);

	if (!outfile.is_open())
		error("Issue with opening file to write");

}
