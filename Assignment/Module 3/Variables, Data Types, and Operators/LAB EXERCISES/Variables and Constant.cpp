#include <iostream>
using namespace std;

int main()
{

    const float PI = 3.14159;

    
    int age = 20;
    float radius = 5.5;
    char grade = 'A';
    double salary = 55000.75;

    int newAge = age + 5;              
    float area = PI * radius * radius; 
    double newSalary = salary + 5000;  

    cout << "Age: " << age << endl;
    cout << "New Age (after 5 years): " << newAge << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area of Circle: " << area << endl;
    cout << "Grade: " << grade << endl;
    cout << "Salary: " << salary << endl;
    cout << "New Salary: " << newSalary << endl;
    cout << "Value of constant PI: " << PI << endl;

    return 0;
}
