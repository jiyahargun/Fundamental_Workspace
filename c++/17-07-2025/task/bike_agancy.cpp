#include <iostream>
using namespace std;

int getBasePrice(int company) 
{
    if (company == 1)
        return 50000; 
    else if (company == 2)
        return 60000; 
    else if (company == 3)
        return 55000;
    else
        return 0;
}

int getConditionDeduction(int condition)
{
    if (condition == 1)
        return 5000;  
    else if (condition == 2)
        return 10000; 
    else if (condition == 3)
        return 15000; 
    else
        return 0;
}

int getInsuranceDeduction(int insurance) 
{
    if (insurance == 2)
        return 5000; 
    else
        return 0;
}


int getAccidentalDeduction(int accidental)
{
    int deduct = 0;
    switch (accidental) 
    {
        case 1:
            deduct = 7000;
            break;
        case 2:
            deduct = 0;
            break;
    }
    return deduct;
}

int main()
{
    int vehicleNo, rcNo, year;
    int company, condition, insurance, accidental;

    cout << "Bike Agency"<<endl;

    cout << "Enter Vehicle No: ";
    cin >> vehicleNo;

    cout << "Enter RC Book No: ";
    cin >> rcNo;

    cout << "Enter Model Year: ";
    cin >> year;

    cout << "Select Company (1=Hero, 2=Honda, 3=bajaj): ";
    cin >> company;

    cout << "Vehicle Condition (1=Good, 2=Medium, 3=Poor): ";
    cin >> condition;

    cout << "Insurance Status (1=Running, 2=Expired): ";
    cin >> insurance;

    cout << "Accidental Insurance (1=Yes, 2=No): ";
    cin >> accidental;

    int price = getBasePrice(company);
    int deduction = getConditionDeduction(condition)
                  + getInsuranceDeduction(insurance)
                  + getAccidentalDeduction(accidental);

    int finalPrice = price - deduction;

    cout << "Final Price"<<endl;
    cout << "Vehicle No: " << vehicleNo << endl;
    cout << "RC Book No: " << rcNo << endl;
    cout << "Model Year: " << year << endl;
    cout << "final price: Rs. " << finalPrice << endl;

    return 0;
}
