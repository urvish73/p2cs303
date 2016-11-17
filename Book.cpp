#ifndef Book_CPP
#define Book_CPP

#include "Priority_Queue.h"
#include <list>
#include <omp.h>
#include "Employee.h"
#include "Book.h"
using namespace std;

bool book::get_archive()
{
    return archive;
}

void book::set_archive(bool arch)
{
    archive = arch;
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

void book::set_beginning_date(Date m_startDate)
{
    startDate = m_startDate;
}

Date book::get_ending_date()
{
    return endDate;
}

void book::set_ending_date(Date m_endDate)
{
    endDate = m_endDate;
}

Date book::get_last_circ_date()
{
    return last_circ_date;
}

void book::set_last_circ_date(Date new_circ_date)
{
    last_circ_date = new_circ_date;
}

void book::fill_employees(list<Employee>& employeeList)
{
    list<Employee>::iterator itr;
    omp_set_num_threads(4);

#pragma omp parallel for//Parallel Programming to speed it up!
    for (itr = employeeList.begin(); itr != employeeList.end(); itr++)//Iterate through employeeList.
    {
        Employee* new_emp = &(*itr);//Declare a pointer to point to the itrs data.
        emp_queue.addEmployee(new_emp);//Add each employee to a queue of Employees.
    }
}

void book::pass_book(Date pass_date)
{
    emp_queue.top().set_retaining_time(last_circ_date, pass_date);//The highest priority employee gets retaining time set.
    int w_time = emp_queue.top().get_retaining_time();//w_time equals the retaining time.
    emp_queue.pop();//That employee is then popped from the queue.
    emp_queue.update_emp_times(w_time);//All the employees have their wait time increased by the previous holders retain
}

int book::get_queueSize()
{
    return emp_queue.size();
}
#endif
