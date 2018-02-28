#pragma once
#include <string>
#include <vector>
#include <memory>
#include <iostream>

class Book
{
private:
	std::string _title;
	std::string _type;
	std::vector<std::string> _book;


public:

	Book(std::string title);
	Book::Book();
	~Book();
	std::string ListContents();
	std::string getBook() { return _title; };
	void addBook(std::string newBook);
	//std::string Search(std::string name);

};