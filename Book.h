#pragma once

#include <iostream>
#include <string>

#include "Date.h"
#include "Library.h"

using namespace std;

class book
{
public:
    book() {};
    book(string name) {};

    bool is_archived();
    string get_name();
    void set_name(string m_name);
    
    Date get_beginning_date();
    void set_beginning_date(Date m_startDate);
    Date get_ending_date();
    void set_ending_date(Date m_endDate);

    void fill_employees(queue<Employee>& employeeQueue);
    int get_emp_size();
    void remove_emp();

private:
    string book_name;
    Date startDate;
    Date endDate;
    bool archive;
    queue<Employee> emp;
};