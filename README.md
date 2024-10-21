# OOP_StudentManagement



Project Summary

    Class Structure:
        -Student: Base class with member variables for name and ID, and methods for initialization and displaying details.
       -GraduateStudent: Inherits from Student, adds a thesis topic, and overrides the display method to include this information.
    -UndergraduateStudent: Inherits from Student, adds a major, and overrides the display method to include the major.
       -Course: Manages a list of Student objects, allows adding students, and has a method to display all enrolled students.

    File Organization:
        -All classes are implemented in their respective header files, encapsulating declarations and inline implementations.
       -A main.cpp file demonstrates the functionality by creating course and student instances and displaying their information.

    Functionality:
        -The program creates a course, adds both graduate and undergraduate students, and displays their details, showcasing polymorphism through overridden display methods.
        -This structure effectively demonstrates inheritance, encapsulation, and basic polymorphism in C++.
