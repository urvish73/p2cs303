#include "Library.h"

void Library::add_book(string book_name)//This function could use improvement.
{
    list<book>::iterator itr;//Search for book object with book_name as its name.
    for (itr = archived_books.begin(); itr != archived_books.end(); itr++)
    {
        if (book_name == itr->get_name())//Book is in archived list.
        {
            cout << "We already have that book." << endl;
            break;
        }
    }
    list<book>::iterator itrr;//Search for book object with book_name as its name.
    for (itrr = circulating_books.begin(); itrr != circulating_books.end(); itrr++)
    {
        if (book_name == itrr->get_name())//Book is in circulating list.
        {
            cout << "We already have that book." << endl;
            break;
        }
    }
    if (!(book_name == itr->get_name()) && !(book_name == itrr->get_name()))//Book isnt in either lists.
    {
        book(book_name);//create a book object
        archived_books.push_front(book_name);//add the book to the archived list
    }
}

void Library::add_employee(string employee_name)
{
    Employee(employee_name);//create a employee object
    employees.push(employee_name);//add employee to queue
}

void Library::circulate_book(string book_name, Date start)
{
    list<book>::iterator itr;//Search for book object with book_name as its name.
    for (itr = archived_books.begin(); itr != archived_books.end(); itr++)
    {
        if (book_name == itr->get_name())
        {
            break;
        }
    }
    /*book itr = return_book(book_name);*/

    //Check if the book is already being circulated.
    if(!(itr->is_archived()))
    {
        circulating_books.push_front(*itr);
        archived_books.remove(*itr);
        itr->fill_employees(employees);
    }
    else 
        cout << "Book is already in circulation." << endl;
    
    
    //The start date is used to calculate retaining time for the first employee in the queue.

}

void Library::pass_on(string book_name, Date pass)
{
    list<book>::iterator itr;//Search for book object with book_name as its name.
    for (itr = circulating_books.begin(); itr != circulating_books.end(); itr++)
    {
        if (book_name == itr->get_name())
        {
            break;
        }
    }
    //For the priority queue the date is important because thats how we calculate waiting and retaining time.

    //If the queue is empty, return the book to the archived list and remove it from circulation.
    if (itr->get_emp_size == 0)
    {
        archived_books.push_front(*itr);
        circulating_books.remove(*itr);
    }
    else
    {
        itr->remove_emp();
    }
}

/*book Library::return_book(string book_name)
{
    list<book>::iterator itr;//Search for book object with book_name as its name.
    for (itr = archived_books.begin(); itr != archived_books.end(); itr++)
    {
        if (book_name == itr->get_name())
        {
            return *itr;
        }
    }
}*/