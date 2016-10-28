#pragma once

#include <iostream>
#include <string>
#include <queue>
#include "Date.h"

using namespace std;

class book
{
public:
    book() {};
    book(const book& var);

    string get_name();
    void set_name(string m_name);

    Date get_beginning_date();
    void set_beginning_date(Date m_startDate);
    Date get_ending_date();
    void set_ending_date(Date m_endDate);

    void fill_employees(list<Employee>& employeeList);

private:
    string book_name;
    Date startDate;
    Date endDate;
    bool archive;

    queue<Employee> emp;
};
