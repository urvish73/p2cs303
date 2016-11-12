#ifndef Priority_Queue_H
#define Priority_Queue_H

#include "Employee.h"
#include <list>
using namespace std;

class Priority_Queue {

private:
    list<Employee*> PQ;
    Employee* _top_priority();


public:
    Priority_Queue() {};
    Priority_Queue(list<Employee*> q1) { PQ = q1; }

    Employee& top();
    void pop();
    int size() { return PQ.size(); }
    void addEmployee(Employee* emp_pointer);
    void update_emp_times(int waiting_time);

};
#endif
