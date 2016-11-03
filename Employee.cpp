/*
Name: Nathaniel Barnett
cpp file for body functions of Employee class.
*/

#include "Employee.h"

void Employee::set_retaining_time(book current_book, Date new_circ_date)
{
	retaining_time = new_circ_date - current_book.get_last_circ_date();
}

void Employee::set_waiting_time(Employee prev_owner)
{
	waiting_time = prev_owner.waiting_time + prev_owner.retaining_time;
}