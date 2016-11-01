/*
Name: Nathaniel Barnett
Header file for employee class
*/

#pragma once
#include <string>
#include "Date.h"
#include "Book.h"
using namespace std;

class Employee {

private:
	string name;
	int waiting_time, retaining_time;

public:
	void employee() { waiting_time = 0; retaining_time = 0; }
	void employee(string m_name) { name = m_name; waiting_time = 0; retaining_time = 0; }
	string get_name() { return name; }
	void set_name(string m_name) { name = m_name; }
	int get_waiting_time() { return waiting_time; }
	int get_retaining_time() { return retaining_time; }
	void set_waiting_time(Employee prev_owner);
	void set_retaining_time(book current_book, Date new_circ_date);
	//Testing upload functionality ^_^
};