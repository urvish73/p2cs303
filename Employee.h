/*
Name: Nathaniel Barnett
Header file for employee class
*/

#ifndef Employee_H
#define Employee_H

#include <string>
#include "Date.h"

using namespace std;
//UPDATE

class Employee {

private:
	string name;
	int waiting_time, retaining_time;

public:
	Employee() { waiting_time = 0; retaining_time = 0; }
	Employee(string m_name) { name = m_name; waiting_time = 0; retaining_time = 0; }
	string get_name() { return name; }
	void set_name(string m_name) { name = m_name; }
	int get_waiting_time() { return waiting_time; }
	int get_retaining_time() { return retaining_time; }
	void set_waiting_time(Employee prev_owner);
	void set_waiting_time(int time_in_waiting) { waiting_time = time_in_waiting; }
	int set_retaining_time(Date last_circ_date, Date new_circ_date);
	//Testing upload functionality ^_^//
	bool operator>(Employee & E2);
	int emp_priority();
};

#endif // !1