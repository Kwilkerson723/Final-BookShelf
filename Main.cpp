#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <cstdlib>
#include "Book.h"
#include "Fiction.h"
#include "nonFiction.h"

using namespace std;

void displayMenu();
void addFictionBook();
void addNonFictionBook();

int main()
{
	
	string title;
	string location;
	string input;
	
		
		//switch for menu options
		int choice = 0;
		while (choice != -1); // how did he bypass the breaks?
		{
			displayMenu();
			cin >> choice;
		switch (choice)
		{
		case 1: system("cls"); {//show fiction
			Book().ListContents(); 
			Fiction().getShelf();
			sort(Fiction().getShelf().begin(), Fiction().getShelf().end());
			Fiction().showShelf();
			//for(int i = 0; i < Fiction().getShelf(i); i++;)
			break;
		}
		case 2: system("cls"); { //show non fiction  //convert to nonfiction
			nonFiction().getShelf();
			sort(nonFiction().getShelf().begin(), nonFiction().getShelf().end());
			nonFiction().showShelf();
			break;
		}
		case 3: system("cls"); {//add fiction book
			std::cin >> title;
			getline(cin, location);
			Fiction().addBook(title);
			addFictionBook();
			break;
		}
		case 4: system("cls");  //add non fiction book
			std::cin >> title;
			getline(cin, location);
			nonFiction().addBook(title);
			addNonFictionBook();
			break;

		case 5: system("cls");{   //we need to add a way for this to interact with the bookshelves.
		string command = "start ";
		string path;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, path);  //better with getline in case there are spaces
		command = command + path;
		system(command.c_str());
		break;
		}
		

		/*case 6: system("cls");  // the merge function here is breaking algorith for some reason.
		{
			
			getline(cin, input);
			cout << "enter the title of your book" << endl; 
			vector<string> mergedShelf;
			//merge(Fiction().getShelf().begin(), Fiction().getShelf().end(), nonFiction().getShelf().begin(), nonFiction().getShelf().end(), mergedShelf);  //big thanks to intellisense
			//auto title = mergedShelf;
			//int i = mergedShelf.size();
			std::vector<string>::iterator it;
			it == find(mergedShelf.begin(), mergedShelf.end(), title);
			if (it != mergedShelf.end())
				cout << "Book found" << *it << '\n';
			else
				cout << "Book not found" << endl; 
				break; 
		}*/
			
		default:choice = -1; break; 
		
		}
		
	}

	system("pause");
	return 0;
}


void displayMenu()
{
	system("cls");
	cout << "Welcome to your bookshelf" << endl;
	cout << "##############################" << endl;
	cout << "1) Show Fiction" << endl;	//shows fiction books
	cout << "2) Show Non Fiction" << endl;	//shows non fiction books
	cout << "3) Add a fiction book" << endl;  //add a book to a vector in fiction
	cout << "4) Add a non fiction book" << endl;  //add a book to a vector in non fiction
	cout << "5) Open a book" << endl;	//use system("start path to book")
	cout << "6) Find a book" << endl;   //search function
	cout << "7) Exit" << endl; 

}


void addFictionBook()
{
	system("cls");
	cout << "enter the name of the book" << endl;
	string title;
	cin >> title;
	//string type;
	cin.ignore();

	auto newBook = title;
	Fiction().addBook(newBook);



}

void addNonFictionBook()
{
	system("cls");
	cout << "enter the name of the book" << endl;
	string title;
	cin >> title;
	//string type;
	cin.ignore();

	auto newBook = title;
	Book().addBook(newBook); // switch to the nonfiction vector



}