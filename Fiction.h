#pragma once
#include "Book.h"
#include <iostream>
#include <string>


class Fiction : public Book
{

private:
	std::vector<std::string> _fictionBookShelf;

public:
	
	std::string title;
	//std::string ListContents();
	
	Fiction(std::string title);
	Fiction::Fiction();
	~Fiction();
	void addBook(std::string newBook);
	std::vector<std::string> getShelf() {return _fictionBookShelf; };
	void showShelf();

};
