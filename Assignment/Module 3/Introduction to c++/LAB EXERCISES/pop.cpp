#include <iostream>
using namespace std;

int main() {
    int length, breadth, area;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of rectangle is: " << area << endl;

    return 0;
}
