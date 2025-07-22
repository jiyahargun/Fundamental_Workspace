#include<iostream>
using namespace std;

class Tops
{
    public:
    int id;
    string name;
    
};
int main()
{   
    
    Tops t1 = Tops();
    
    t1.id=101;
    t1.name="jiya";
    
    cout<<"Your id is: "<<t1.id<<endl;
    cout<<"Your Name is : "<<t1.name<<endl;
    
     return 0;
}
