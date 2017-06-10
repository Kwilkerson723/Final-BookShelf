#include "Fiction.h"





Fiction::Fiction(std::string title) : title(title)
{
}

Fiction::Fiction(){}


Fiction::~Fiction()
{
}

void Fiction::addBook(std::string newBook)
{
	_fictionBookShelf.push_back(newBook);
}

void Fiction::showShelf()
{
	for (int i = 0; i < _fictionBookShelf.size(); i++)
	{
		std::cout << _fictionBookShelf[i] << std::endl;
	}
}

//std::string Fiction::ListContents()
//{
//	std::string output = "\n";
//	for (auto book : _fictionBookShelf) {
//		output += "\\" + book->getBook() + "\n";
//	}
//	return output;
//}