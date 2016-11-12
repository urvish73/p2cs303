#ifndef Priority_Queue_CPP
#define Priority_Queue_CPP

#include "Priority_Queue.h"
using namespace std;

Employee* Priority_Queue::_top_priority()//Returns employee from list that has highest priority.
{
    list<Employee*>::iterator itr;
    Employee* Temp_emp = PQ.front();
    for (itr = PQ.begin(); itr != PQ.end(); itr++)//Checks entire list.
    {
        if (*(*itr) > *Temp_emp)
        {
            Temp_emp = *itr;//Finds largest priority.
        }
    }
    return Temp_emp;//Returns it.
}

void Priority_Queue::update_emp_times(int waiting_time)//Every employee updates their wait time.
{
    list<Employee*>::iterator itr;
    for (itr = PQ.begin(); itr != PQ.end(); itr++)
    {
        (*itr)->set_waiting_time(waiting_time);
    }
}

Employee& Priority_Queue::top()//Works as the top function from queue class.
{
    return *_top_priority();
}

void Priority_Queue::pop()//Works as the pop function from queue class.
{
    PQ.remove(_top_priority());
}

void Priority_Queue::addEmployee(Employee* emp_pointer)//Works as the push function from queue class. 
{
    PQ.push_back(emp_pointer);
}
#endif
