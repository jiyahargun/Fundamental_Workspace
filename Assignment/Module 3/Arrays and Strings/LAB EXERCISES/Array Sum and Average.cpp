#include <iostream>
using namespace std;

int main() 
{
    int numbers[100], n, sum = 0;
    float average;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
