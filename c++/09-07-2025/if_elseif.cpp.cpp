#include<iostream>
using namespace std;
int main()
{
    int marks;
    
    cout<<"Enter a marks";
    cin>>marks;
    
    if(marks>=70)
    {
        cout<<"A grade"<<endl;
    }
    else if (marks>=60)
    {
        cout<<"B grade"<<endl;
    }
    
     else if (marks>=50)
    {
        cout<<"c grade"<<endl;
    }
    
      else if (marks>=40)
    {
        cout<<"D grade"<<endl;
    }
    
    else
    {
        cout<<"Fail"<<endl;
    }
    return 0;
}