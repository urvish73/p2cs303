#pragma once
#include <string>
#include <list>
#include "Date.h"

using namespace std;

class Library
{
private:

    list<string> archived_books; //List of archived books.
    list<string> circulating_books; //List of books in circulation.
    list<string> employee_names; //List of employees who will check books out.

public:

    Library() {}; //Default constructor.

    void add_book(string book_name); //Add a book to list of archived books.
    void add_employee(string employee_name); //Add a employee to the list of employees
    void circulate_book(string book_name, Date start); //Start circulation for book on a specific day.
    void pass_on(string book_name, Date pass); //Pass the book from one employee to the next on a specific day.
};
