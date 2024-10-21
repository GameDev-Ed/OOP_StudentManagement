#pragma once
#include "Student.h"

class Course : public Student
{
private:
	string courseName;
	vector<Student*> enrolledstudents; // Vector to store pointers to Student objects



public:
	Course(const string& name) : courseName(name) {};


	// Method to add students to the course
	void AddStudentToCourse(const vector<Student*>& students) {
		for (Student* Student : students)
		{
			// Add each student pointer to the vector
			enrolledstudents.push_back(Student);
		}

	};
	// Method to display all enrolled students
	void DisplayStudentsInCoursee() const {
		cout << "Enrolled students in " << courseName << ":\n";
		for (const Student* student: enrolledstudents)
		{
			if (student)
			{
				student->StudentDetails();// Call the display method of each student
			}
		}
	};



};

