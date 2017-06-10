#include "Book.h"



Book::Book()
{
}

//std::string Book::ListContents()
//{
//	_book
//	return output;
//}

Book::Book(std::string title) : _title(title)
{
}

Book::~Book()
{
}

void Book::addBook(std::string newBook)
{
	_book.push_back(newBook);
}

//std::string Book::Search(std::string name)
//{
//	for (auto book : _book) //so this line defines the pointer "file" //"_files" is a vector 
//	{
//		//	auto file = folder->Search(name);
//		if (title == name) {
//			return book;
//		}
//		return nullptr;
//	}
//}
