#pragma once
#include "Library.h"

void Library::add_book(string book_name)
{
    archived_books.push_front(book_name);
}

void Library::add_employee(string employee_name)
{
    employee_names.push_front(employee_name);
}

void Library::circulate_book(string book_name, Date start)
{
    circulating_books.push_front(book_name);
    archived_books.remove(book_name);

}

void Library::pass_on(string book_name, Date pass)
{

}