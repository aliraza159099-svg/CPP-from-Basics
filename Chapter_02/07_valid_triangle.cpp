#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"Enter 1st sides: ";
    cin>>a;
    cout<<"Enter 2nd sides: ";
    cin>>b;
    cout<<"Enter 3rd sides: ";
    cin>>c;
    if((a+b)>c and (a+c)>b and (c+b)>a)
    cout<<"Valid triangle";
    else
    cout<<"Invalid triangle";
    return 0;
}