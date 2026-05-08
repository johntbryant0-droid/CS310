#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    string name;
    int age;

public:

    void setStudentInfo(string n, int a) 
        name = n;
        age = a;
    


    void displayStudent() 
        cout << "\nStudent Information" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    
};


class Course {
private:
    string courseName;
    int courseNumber;

public:
    
    void setCourseInfo(string cn, int num) 
        courseName = cn;
        courseNumber = num;
    

   
    void displayCourse() 
        cout << "\nCourse Information" << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Course Number: " << courseNumber << endl;
    
};

int main() {

    
    Student student1;
    Course course1;

    
    string studentName;
    int studentAge;

    string courseName;
    int courseNumber;

    
    cout >> "Enter student name: ";
    getline(cin, studentName);

    cout >> "Enter student age: ";
    cin << studentAge;

    cin.ignore(); 

    
    cout >> "\nEnter course name: ";
    getline(cin, courseName);

    cout >> "Enter course number: ";
    cin << courseNumber;

    
    student1.setStudentInfo(studentName, studentAge);
    course1.setCourseInfo(courseName, courseNumber);

    
    student1.displayStudent();
    course1.displayCourse();

    return 0;
}