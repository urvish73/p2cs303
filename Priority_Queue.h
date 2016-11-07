#ifndef Priority_Queue_H
#define Priority_Queue_H

#include "Employee.h"
#include <queue>
using namespace std;

class Priority_Queue {

private:
	queue<Employee> PQ;

public:
	Priority_Queue();
	Priority_Queue(queue<Employee> q1) { PQ = q1; }
	Employee top_priority();
	void Prioritize();
	void addEmployee(Employee emp) { PQ.push(emp); }
};

#endif // !1