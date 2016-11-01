#pragma once
#include <queue>
#include <string>

using namespace std;

class Employee
{
private:
    string employee_name;
    int waiting_time;
    int retaining_time;

public:
    Employee() {};
    Employee(string name);

};