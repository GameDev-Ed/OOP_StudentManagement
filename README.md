# OOP_StudentManagement


Class Structure:

- Student: Base class with member variables for name and ID, and methods for initialization and displaying details.
- GraduateStudent: Inherits from Student, adds a thesis topic, and overrides the display method to include this information.
- UndergraduateStudent: Inherits from Student, adds a major, and overrides the display method to include the major.
- Course: Manages a list of Student objects, allows adding students, and has a method to display all enrolled students.

File Organization:

  - All classes are implemented in their respective header files, encapsulating declarations and inline implementations.
  - A main.cpp file demonstrates the functionality by creating course and student instances and displaying their information.
Functionality:

  - The program creates a course, adds both graduate and undergraduate students, and displays their details, showcasing polymorphism through overridden display methods.
  - This structure effectively demonstrates inheritance, encapsulation, and basic polymorphism in C++.
What I have learned:

  - I learned how to create and to use a constructor initializer list which is huge help when it comes to being the more effecient way/ optimize!
  - A constructor initializer list is a special syntax used in C++ (and some other programming languages) to initialize member variables of a class before the constructor's body is executed. It is particularly useful for initializing constant members, reference members, or base class sub-objects.

Benefits:

- Efficiency: Initializing member variables directly can be more efficient than assigning them within the constructor body.
- Initialization of Const and Reference Members: These types of members must be initialized using an initializer list since they cannot be assigned new values later.
- Base Class Initialization: If your class is derived from a base class, you can initialize the base class using the initializer list.

My personal thoughts:

 After taking a significant break from programming, returning to it has been both a challenge and an invigorating experience. This time away allowed me to reset my perspective and approach coding with a fresh mindset. Previously, I often found myself constrained by a rigid way of thinking, feeling like I had to strictly adhere to what my instructors taught or believe that there was only one correct method to solve a problem. However, this return has reminded me that programming is inherently flexible and creative. There are countless ways to approach a problem, and exploring these diverse methods has reignited my passion for coding. Overall, this experience has not only refreshed my skills but also encouraged me to embrace the variety and creativity that programming offers. It’s a journey that emphasizes exploration and innovation, and I'm excited to see where this new mindset will take me.
