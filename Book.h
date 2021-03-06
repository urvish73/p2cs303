#ifndef Book_H
#define Book_H

#include <iostream>
#include <string>
#include <list>
#include <queue>
#include "Date.h"
#include "Employee.h"
#include "Priority_Queue.h"
using namespace std;

class book {
public:
    book() { archive = true; }

    bool get_archive();
    void set_archive(bool arch);
    
    string get_name();
    void set_name(string m_name);

    Date get_beginning_date();
    void set_beginning_date(Date m_startDate);

    Date get_ending_date();
    void set_ending_date(Date m_endDate);

    Date get_last_circ_date();
    void set_last_circ_date(Date new_circ_date);

    void fill_employees(list<Employee>& employeeList);//Fills the books emp_queue with employees fromthe libraries employeeList.

    void pass_book(Date pass_date);

    int get_queueSize();

private:
    string book_name;
    Date last_circ_date;
    Date startDate;
    Date endDate;
    bool archive;

    Priority_Queue emp_queue;
};
#endif
