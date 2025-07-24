#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    float num3;

    cout << "Enter First integer: ";
    cin >> num1;

    cout << "Enter Second integer: ";
    cin >> num2;

    cout << "Enter a float number: ";
    cin >> num3;

    float implicitResult = num1 + num3;
    float explicitResult = (float)num1 / num2;

    cout << "Result after implicit conversion: " << implicitResult << endl;
    cout << "Result after explicit conversion: " << explicitResult << endl;

    return 0;
}
