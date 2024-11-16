/*
Name: Lab9_Welton
Author: Christopher Welton
Description: This program creates and binds students with courses
*/
#include "Student.h"
#include "Course.h"
#include<iostream>

using namespace std;

int main() {
    Student hughJass = Student("Hugh" , "Jass");
    Student ivannaHugandKiss = Student("Ivanna", "Hugandkiss");

    Course algebra = Course("Algebra", 3);
    Course discreteMath = Course("Discrete Math", 3);
    Course english = Course("English", 5);
    Course chemistry = Course("Chemistry", 3);

    hughJass.addCourse(algebra);
    hughJass.addCourse(discreteMath);
    hughJass.addCourse(english);

    ivannaHugandKiss.addCourse(chemistry);
    ivannaHugandKiss.addCourse(discreteMath);
    ivannaHugandKiss.addCourse(english);
    cout << "Printing the updated `<<` operator for two created students, each with 3 classes: " << endl;
    cout << hughJass;
    cout << ivannaHugandKiss;


    //Testing functionality
    Student testStudent = Student();
    cout << "\nTest student with default constructor GPA should be 0 and is: " << testStudent.gpa_calc() << endl;
    cout << "\nPrinting the default constructed testStudent: " << testStudent << endl;

    hughJass.gpa_override(3.90);
    hughJass.setAddress("1234 Fake st.");
    hughJass.addCourse(chemistry);
    cout << "\nUpdated Student Hugh Jass to set address (1234 Fake st.), set GPA (3.90) and Course Chemsitry should print with data: " << endl;
    hughJass.print();

    Student testStudentTwin = Student(testStudent);
    cout << "\nPrinting a copy of testStudent: " << endl;
    cout << testStudentTwin;
    cout << "\nSetting testStudent equal to HughJass and printing: " << endl;
    testStudent = hughJass;
    cout << testStudent;

    Course testCourse = Course();
    cout << "\nCreating a new Course with default constructor and printing: " << endl;
    testCourse.print();
    testCourse.changeGrade('A');
    cout << "\nChanging grade of testCourse to `A` and printing grade: " << testCourse.getGrade() << endl;
    cout << "\nPrinting the testCourse getHours function: " << testCourse.getHours() << endl;

    cout << "\nPringting the `<<` operator for two courses: " << endl;
    cout << chemistry << "\n" << testCourse;

    return 0;
}