#ifndef Employee_H
#define Employee_H

#include <string>
#include "Date.h"
using namespace std;

class Employee {

private:
    string name;
    int waiting_time, retaining_time;

public:
    Employee() { waiting_time, retaining_time = 0; }

    string get_name() { return name; }
    void set_name(string m_name) { name = m_name; }

    int get_waiting_time() { return waiting_time; }
    void set_waiting_time(int time_in_waiting);

    int get_retaining_time() { return retaining_time; }
    void set_retaining_time(Date last_circ_date, Date new_circ_date);

    bool operator>(Employee & E2);
};
#endif 
