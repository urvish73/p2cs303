#ifndef Library_H
#define Library_H

#include <string>
#include <list>
#include "Date.h"
#include "Employee.h"
#include "Priority_Queue.h"
#include "Book.h"

using namespace std;

class Library
{
private:

    list<book> archived_books; //List of archived books.
    list<book> circulating_books; //List of books in circulation.
    list<Employee> employee_names; //List of employees who will check books out.

public:

    Library() {}; //Default constructor.

    void add_book(string book_name); //Add a book to list of archived books.
    void add_employee(string employee_name); //Add a employee to the list of employees
    void circulate_book(string book_name, Date start); //Start circulation for book on a specific day.
    void pass_on(string book_name, Date pass); //Pass the book from one employee to the next on a specific day.
};

#endif // !1