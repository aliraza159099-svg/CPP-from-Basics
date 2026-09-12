#include <iostream>
using namespace std;
int main()
{
    int num = 34; // integers can't be named as string, fload, true, false etc
    cout << "The value of number is : " << num << endl;
    float a = 23.32;
    cout << "The floating alue of number is : " << a;
    string name = "Ali Raza";
    cout<<endl<<"The name is : "<<name;
    double num1 = 78.0907;
    cout<<endl<<"The double value is : "<<num1;
    cout<<"the length of string is : "<<name.length();
    return 0;
}
