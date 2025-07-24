#include <iostream>
using namespace std;

class Rectangle 
{
public:
    int length, breadth;

    void input() 
    {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
    }

    int calculateArea() 
    {
        return length * breadth;
    }
};

int main() 
{
    Rectangle r;
    r.input();

    int area = r.calculateArea();

    cout << "Area of rectangle is: " << area << endl;

    return 0;
}
