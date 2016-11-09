#ifndef Priority_Queue_CPP
#define Priority_Queue_CPP

#include "Priority_Queue.h"
using namespace std;

Employee* Priority_Queue::_top_priority()
{
	list<Employee*>::iterator itr;
	Employee* Temp_emp = PQ.front();
	for (itr = PQ.begin(); itr != PQ.end(); itr++)
	{
		if (*(*itr) > *Temp_emp)
		{
			Temp_emp = *itr;
		}
	}
	return Temp_emp;
}

Employee& Priority_Queue::top()
{
	return *_top_priority();
}

void Priority_Queue::pop()
{
	PQ.remove(_top_priority());
}

Priority_Queue::Priority_Queue()
{
	;
}

void Priority_Queue::addEmployee(Employee* emp_pointer)
{
	list<Employee*>::iterator itr = PQ.begin();
	for (itr; itr != PQ.end(); itr++)
	{
		if (*emp_pointer > *(*itr))	//since iterator points to a pointer, must be dereferenced twice
		{
			PQ.insert(itr, emp_pointer);
			break;
		}
	}
	PQ.push_back(emp_pointer);
}

#endif
