#include "Book.h"

book::book(string name)
{
    book_name = name;
    archive = true;
    emp;
}

bool book::is_archived()
{
    return archive;
}

string book::get_name()
{
    return book_name;
}

void book::set_name(string m_name)
{
    book_name = m_name;
}

Date book::get_beginning_date()
{
    return startDate;
}

Date book::get_ending_date()
{
    return endDate;
}

void book::set_beginning_date(Date m_startDate)
{
    startDate = m_startDate;
}

void book::set_ending_date(Date m_endDate)
{
    endDate = m_endDate;
}

void book::fill_employees(queue<Employee>& employeeQueue)
{
    emp = employeeQueue;
}

int book::get_emp_size()
{
    return emp.size();
}

void book::remove_emp()
{
    emp.pop();
}