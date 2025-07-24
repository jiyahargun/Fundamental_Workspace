#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    void getDetails() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    int rollNo;

public:
    void getStudentData() 
    {
        getDetails();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentData()
    {
        showDetails();
        cout << "Roll No: " << rollNo << endl;
    }
};

class Teacher : public Person 
{
private:
    string subject;

public:
    void getTeacherData()
    {
        getDetails();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTeacherData() 
    {
        showDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() 
{
    Student s;
    Teacher t;

    cout << "Enter Student Data " << endl;
    s.getStudentData();

    cout << "Enter Teacher Data " << endl;
    t.getTeacherData();

    cout << " Student Info " << endl;
    s.showStudentData();

    cout << " Teacher Info " << endl;
    t.showTeacherData();

    return 0;
}
