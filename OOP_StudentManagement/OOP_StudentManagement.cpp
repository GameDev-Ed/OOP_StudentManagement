

#include <iostream>
#include "GraduateStudent.h"
#include "Course.h"
#include "UndergraduateStudent.h"

int main()
{
    Course myCourse("Introduction to C++");
    Student* GradStudent = new GraduateStudent("John","Doe",12,"Programming");
    Student* underGradStudent = new UndergraduateStudent("GameDev", "ED", 13, "Computer Science");

    

    myCourse.RemoveStudentFromCourse(GradStudent); 
    
    myCourse.DisplayStudentsInCoursee();
}

