// OOP_StudentManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Student.h"
#include "GraduateStudent.h"
#include "Course.h"
#include "UndergraduateStudent.h"

int main()
{
    Course* Math;
    GraduateStudent* GradStudent = new GraduateStudent("John","Doe",12,"Programming");
    UndergraduateStudent* underGradStudent = new UndergraduateStudent("GameDev", "ED", 13, "Computer Science");
}

