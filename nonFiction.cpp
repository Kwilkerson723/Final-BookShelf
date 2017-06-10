#include "nonFiction.h"





nonFiction::nonFiction(std::string title) : title(title)
{
}

nonFiction::nonFiction() {}


nonFiction::~nonFiction()
{
}

void nonFiction::addBook(std::string newBook)
{
	_nonfictionBookShelf.push_back(newBook);
}

void nonFiction::showShelf()
{
	for (int i = 0; i < _nonfictionBookShelf.size(); i++)
	{
		std::cout << _nonfictionBookShelf[i] << std::endl;
	}
}
