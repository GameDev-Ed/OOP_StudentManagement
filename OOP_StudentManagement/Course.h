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
	void AddStudentToCourse(Student* students) {enrolledstudents.push_back(students); }; // Add each student pointer to the vector

	void RemoveStudentFromCourse(Student* students) {enrolledstudents.clear();}; // clears the student vector making it empty

	// Method to display all enrolled students
	void DisplayStudentsInCoursee() const {
		cout << endl << endl;
		cout << "Enrolled students in: " << courseName << ":\n";
		if (enrolledstudents.empty())
			cout << "No one is enrolled in this class!!!" << endl;
		else {
			for (const Student* student : enrolledstudents)
			{
				student->StudentDetails();// Call the display method of each student
			}
		}
	};
	// Clean up memory
	~Course() { for (const Student* student : enrolledstudents) { delete student; } }
};

