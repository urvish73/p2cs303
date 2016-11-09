#include "Book.h"
#include "Library.h"
#include "Priority_Queue.h"


using namespace std;

int main()
{
	/*	// This code simply tests the Priority Queue class and illustrates the public functions.
	Priority_Queue pq34;
	for (int i = 0; i < 10; i++)
	{
		Employee* emp = new Employee;
		emp->set_name("BACON_BOY" + i);
		pq34.addEmployee(emp);
	}

	Employee bob = pq34.top();
	pq34.pop();
	pq34.pop();
	int bint = pq34.size();
	pq34.top();
	*/

	
    Library library; //library class not yet created
    library.add_book("Software Engineering");
    library.add_book("Chemistry");

    library.add_employee("Adam");
    library.add_employee("Sam");
    library.add_employee("Ann");

    library.circulate_book("Chemistry", Date(2015, 3, 1, DateFormat::US));
    library.circulate_book("Software Engineering", Date(2015, 4, 1, DateFormat::US));

    library.pass_on("Chemistry", Date(2015, 3, 5, DateFormat::US)); 
    library.pass_on("Chemistry", Date(2015, 3, 7, DateFormat::US));
    library.pass_on("Chemistry", Date(2015, 3, 15, DateFormat::US)); 

    library.pass_on("Software Engineering", Date(2015, 4, 5, DateFormat::US));
    library.pass_on("Software Engineering", Date(2015, 4, 10, DateFormat::US));
    library.pass_on("Software Engineering", Date(2015, 4, 15, DateFormat::US));

	
}