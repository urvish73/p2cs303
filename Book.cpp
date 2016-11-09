//Urvish Shah
//Book class
#ifndef Book_CPP
#define Book_CPP

#include "Priority_Queue.h"
#include <list>
#include <omp.h>
#include "Employee.h"
#include "Book.h"
using namespace std;
//UPDATE

book::book()
{
	archive = true;
}

book::book(string m_name)
{
	book_name = m_name;
	archive = true;
}

/*book::book(const book& var)
{
    book_name = var.book_name;
    startDate = var.startDate;
    endDate = var.endDate;
    archive = var.archive;
	emp_queue = var.emp_queue;
}*/

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

Date book::get_last_circ_date()
{
	return last_circ_date;
}

void book::set_last_circ_date(Date new_circ_date)
{
	last_circ_date = new_circ_date;
}

void book::pass_book(Date pass_date)
{
	int w_time = emp_queue.top().set_retaining_time(last_circ_date, pass_date);
	emp_queue.pop();
	emp_queue.update_emp_times(w_time);
}

//Had a talk with Dr.Kuhail and he recommended to use this as now we don't have to worry about parallel coding.
void book::fill_employees(list<Employee>& employeeList)
{
    list<Employee>::iterator itr;
    
    omp_set_num_threads(3);

    #pragma omp parallel for
    for (itr = employeeList.begin(); itr != employeeList.end(); itr++)
    {
		Employee* new_emp = new Employee(*itr);
		emp_queue.addEmployee(new_emp); //function not declared yet since priority class is not made.   
    }
	/*
	for (itr = employeeList.begin(); itr != employeeList.end(); itr++)
	{
		emp_queue.push(*itr);
	}*/
}

#endif // !1