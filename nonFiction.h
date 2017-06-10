#pragma once
#include "Book.h"
#include <iostream>
#include <string>


class nonFiction : public Book
{

private:
	std::vector<std::string> _nonfictionBookShelf;

public:

	std::string title;
	//std::string ListContents();

	nonFiction(std::string title);
	nonFiction::nonFiction();
	~nonFiction();
	void addBook(std::string newBook);
	std::vector<std::string> getShelf() { return _nonfictionBookShelf; };
	void showShelf();

};