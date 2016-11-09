#ifndef Library_CPP
#define Library_CPP

#include "Library.h"

using namespace std;
//UPDATE
void Library::add_book(string book_name)
{
	book new_book;
	new_book.set_name(book_name);
    archived_books.push_front(new_book);
}

void Library::add_employee(string employee_name)
{
	Employee new_emp;
	new_emp.set_name(employee_name);
    employee_names.push_front(new_emp);
}

void Library::circulate_book(string book_name, Date start)
{
	book real_book; //replace with some way of finding the real book element.
	real_book.set_beginning_date(start);
    circulating_books.push_front(real_book);
	// something here to remove the "real_book" from the list of archinved books.

}

void Library::pass_on(string book_name, Date pass)
{
	//need function to take book string name and find the actual book element in the list of books.
	book real_book;	// replace with some way of finding the real book.
	real_book.pass_book(pass);
	real_book.set_last_circ_date(pass);
	// these lines need to be implemented...
}

#endif
