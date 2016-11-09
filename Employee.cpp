/*
Name: Nathaniel Barnett
cpp file for body functions of Employee class.
*/
#ifndef Library_CPP
#define LIbrary_CPP

#include "Employee.h"
using namespace std;

int Employee::set_retaining_time(Date last_circ_date, Date new_circ_date)
{
	return retaining_time = new_circ_date - last_circ_date;
}

void Employee::set_waiting_time(Employee prev_owner)
{
	waiting_time = prev_owner.waiting_time + prev_owner.retaining_time;
}

bool Employee::operator>(Employee & E2)
{
	if ((waiting_time - retaining_time) > (E2.get_waiting_time() - E2.get_retaining_time()))
		return true;
	return false;
}

int Employee::emp_priority()
{
	return (waiting_time - retaining_time);
}

#endif