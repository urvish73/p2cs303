#ifndef Library_CPP
#define Library_CPP

#include "Library.h"
using namespace std;

void Library::add_book(string book_name)
{
    book new_book;
    new_book.set_name(book_name);
    archived_books.push_front(new_book);
}
#ifndef Library_CPP
#define Library_CPP

#include "Library.h"
using namespace std;

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
	list<book>::iterator itr;
	for (itr = archived_books.begin(); itr != archived_books.end(); itr++)//Search for book object with book_name as its name.
	{
		if (book_name == itr->get_name())//If we fiind the book, itr will be our gateway to its data types.
		{
			itr->fill_employees(employee_names);//Pass the list of employees so that the book can have its own private queue of employees.
			itr->set_beginning_date(start);//Keep info on when the book starts circulation.
			itr->set_last_circ_date(start);
			circulating_books.push_front(*itr);//Push it onto the list of circulating books.
			archived_books.remove(*itr);//Remove it from the list of archived books.
			itr->set_archive(false);//Changes the books archive value to false.
		}
	}
}

void Library::pass_on(string book_name, Date pass)
{
	list<book>::iterator itr;
	for (itr = circulating_books.begin(); itr != circulating_books.end(); itr++)//Search for book object with book_name as its name.
	{
		if (book_name == itr->get_name())
		{
			if (itr->get_queueSize() == 0)//Check if the queue has any employees left.
			{
				itr->set_ending_date(pass);
				archived_books.push_front(*itr);//Return book to archived list.
				circulating_books.remove(*itr);//Remove book from circulating list.
				itr->set_archive(true);//Book is now archived.
			}
			else
			{
				itr->pass_book(pass);//Sends info to pass_book letting us calculate how long a employee retained this book.
				itr->set_last_circ_date(pass);//Updates the last time this book was passed on so that we can continue to calculate retaining/waiting time for employees.
			}
		}
	}
}
#endif

void Library::add_employee(string employee_name)
{
    Employee new_emp;
    new_emp.set_name(employee_name);
    employee_names.push_front(new_emp);
}

void Library::circulate_book(string book_name, Date start)
{
    list<book>::iterator itr;
    for (itr = archived_books.begin(); itr != archived_books.end(); itr++)//Search for book object with book_name as its name.
    {
        if (book_name == itr->get_name())//If we fiind the book, itr will be our gateway to its data types.
        {
            itr->fill_employees(employee_names);//Pass the list of employees so that the book can have its own private queue of employees.
            itr->set_beginning_date(start);//Keep info on when the book starts circulation.
            itr->set_last_circ_date(start);
            circulating_books.push_front(*itr);//Push it onto the list of circulating books.
            archived_books.remove(*itr);//Remove it from the list of archived books.
            itr->set_archive(false);//Changes the books archive value to false.
        }
    }
}

void Library::pass_on(string book_name, Date pass)
{
    list<book>::iterator itr;
    for (itr = circulating_books.begin(); itr != circulating_books.end(); itr++)//Search for book object with book_name as its name.
    {
        if (book_name == itr->get_name())
        {
            if (itr->get_queueSize() == 0)//Check if the queue has any employees left.
            {
                itr->set_ending_date(pass);
                archived_books.push_front(*itr);//Return book to archived list.
                circulating_books.remove(*itr);//Remove book from circulating list.
                itr->set_archive(true);//Book is now archived.
            }
            else
            {
                itr->pass_book(pass);//Sends info to pass_book letting us calculate how long a employee retained this book.
                itr->set_last_circ_date(pass);//Updates the last time this book was passed on so that we can continue to calculate retaining/waiting time for employees.
            }
        }
    }
}
#endif
