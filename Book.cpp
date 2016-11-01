//Urvish Shah
//Book class

#include "Book.h"

book::book(const book& var)
{
    book_name = var.book_name;
    startDate = var.startDate;
    endDate = var.endDate;
    archive = var.archive;
}

string book::get_name()
{
    return book_name;
}

Date book::get_beginning_date()
{
    return startDate;
}

Date book::get_ending_date()
{
    return endDate;
}

void book::set_name(string m_name)
{
    book_name = m_name;
}

void book::set_beginning_date(Date m_startDate)
{
    startDate = m_startDate;
}

void book::set_ending_date(Date m_endDate)
{
    endDate = m_endDate;
}

void book::fill_employees(list<Employee>& employeeList)
{
    list<Employee>::iterator itr;

    for (itr = employeeList.begin(); itr != employeeList.end(); itr++)
    {
        emp.add_employee(*itr);
    }
}
