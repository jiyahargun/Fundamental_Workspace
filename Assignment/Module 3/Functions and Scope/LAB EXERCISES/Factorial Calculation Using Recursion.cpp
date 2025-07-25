#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial is not defined for negative numbers.";
    else
        cout << "Factorial of " << number << " is: " << factorial(number);

    return 0;
}
