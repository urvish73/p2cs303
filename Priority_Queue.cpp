#ifndef Priority_Queue_CPP
#define Priority_Queue_CPP

#include "Priority_Queue.h"
using namespace std;

void Priority_Queue::Prioritize()
{
	queue<Employee> temp_queue;
	int size = PQ.size();
	for (int i = 0; i < size; i++)
	{
		temp_queue.push(top_priority());
	}

	PQ = temp_queue;
}

Priority_Queue::Priority_Queue()
{
	;
}

Employee Priority_Queue::top_priority() {

	Employee max_val = PQ.front(); //make the fist element the max value
	Employee temp_emp;
	int to_be_deleted_location;

	PQ.pop();
	PQ.push(max_val);
	for (int i = 0; i < PQ.size(); i++)
	{
		if (max_val.emp_priority() < PQ.front().emp_priority())
		{
			to_be_deleted_location = i;
			max_val = PQ.front();
		}
		PQ.push(PQ.front());
		PQ.pop();
	}
	for (int i = 0; i < to_be_deleted_location; i++)
	{
		PQ.push(PQ.front());
		PQ.pop();
	}

	PQ.pop();

	return max_val;
}

#endif
