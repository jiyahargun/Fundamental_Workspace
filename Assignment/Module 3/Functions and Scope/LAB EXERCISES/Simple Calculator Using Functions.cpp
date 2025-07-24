#include <iostream>
using namespace std;

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Result: " << add(num1, num2);
    } 
    else if (choice == 2) 
    {
        cout << "Result: " << subtract(num1, num2);
    }
    else if (choice == 3)
    {
        cout << "Result: " << multiply(num1, num2);
    } 
    else if (choice == 4)
    {
        if (num2 != 0) 
        {
            cout << "Result: " << divide(num1, num2);
        } 
        else
        {
            cout << "Error: Division by zero is not allowed.";
        }
    } 
    else 
    {
        cout << "Invalid choice.";
    }

    return 0;
}
