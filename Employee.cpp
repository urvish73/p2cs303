#ifndef Library_CPP
#define LIbrary_CPP

#include "Employee.h"
using namespace std;

void Employee::set_waiting_time(int time_in_waiting)
{
    waiting_time += time_in_waiting;
}

void Employee::set_retaining_time(Date last_circ_date, Date new_circ_date)
{
    retaining_time = new_circ_date - last_circ_date;
}

bool Employee::operator>(Employee & E2)
{
    if ((waiting_time - retaining_time) > (E2.get_waiting_time() - E2.get_retaining_time()))
        return true;
    return false;
}
#endif
