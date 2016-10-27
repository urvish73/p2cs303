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
    book(const book& var);//This seemed odd to me, but ill let you explain it.

    string get_name();
    void set_name(string m_name);

    Date get_beginning_date();
    void set_beginning_date(Date m_startDate);
    Date get_ending_date();
    void set_ending_date(Date m_endDate);

private:
    string book_name;
    Date startDate;
    Date endDate;
    bool archive;
    //I believe we need to add something like queue<Employees> q;
    //This will require a new object Employee to be made as well
    
    //A book has the following properties: name, circulation start date, circulation end date, archived, 
    //a queue of employees (the employees who are planned to get the book). 
};
