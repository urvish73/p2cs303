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
	Priority_Queue();
	Priority_Queue(list<Employee*> q1) { PQ = q1; }
	Employee& top();
	void pop();
	int size() {return PQ.size(); }
	void addEmployee(Employee* emp_pointer);
	void update_emp_times(int waiting_time);
	

	/*
	NOTE: After much thought, and multiple attempts at coding various sorting methods using pointers within lists
	to try and keep the complexity and efficiency of our code within reasonable bounds, I have reached this solution.
	Basically, I decided since the cost of finding an item in a list is O(1), and since the actual physical order 
	of our priority queue does not have to resemble an ordered queue. The class simply needs to behave like one.
	Therefore, the "top(), pop(), and size()" functions behave exactly as one would expect from a queue-ype class.
	In addition, instead of having a "push()" function, we have opted for naming it "addEmployee()," but it performs
	the same functionality.
	*/
};



#endif // !1