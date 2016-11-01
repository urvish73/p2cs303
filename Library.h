#pragma once
#include <string>
#include <list>
#include <queue>
#include <algorithm>

#include "Book.h"
#include "Employee.h"
#include "Date.h"

using namespace std;

class Library
{
private:

    list<book> archived_books; //List of archived books.
    list<book> circulating_books; //List of circulating books.
    queue<Employee> employees; //List of employees who will check books out.

public:

    Library() {}; //Default constructor.

    void add_book(string book_name); //Add a book to list of archived books.
    void add_employee(string employee_name); //Add a employee to the list of employees
    void circulate_book(string bookname, Date start); //Start circulation for book on a specific day. The first employee in the queue starts with the book.
    void pass_on(string book_name, Date pass); //Pop the top employee in the queue for given book on the date given.
    //book return_book(string book_name);
};
