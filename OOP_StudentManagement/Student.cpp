#include "Student.h"



Student::Student(const string& firstname, const string& lastname, const float _StudentId)
{
	FirstName = firstname;
	LastName = lastname;
	StudentId = _StudentId;
}

void Student::StudentDetails()
{
	cout << "First name: " << FirstName << endl;
	cout << "last name: " << LastName << endl;
	cout << "Student: " << StudentId << endl;
}



Student::~Student()
{

}