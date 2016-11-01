/*
Name: Nathaniel Barnett
Header file for employee class
*/

#pragma once
#include <string>

using namespace std;

class Employee {

private:
	string name;
	int waiting_time, retaining_time;

public:
	string get_name() { return name; }
	void set_name(string m_name) { name = m_name; }
	int get_waiting_time() { return waiting_time; }
	int get_retaining_time() { return retaining_time; }
	void set_waiting_time();
	void set_retaining_time();
};