#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Please enter your integer : ";
    cin>>x;
    cout<<"the Ascii value of "<<x<<" is : "<<char(x); 
    // its happening due to type casting
    return 0;
}