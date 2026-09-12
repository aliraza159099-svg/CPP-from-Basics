#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"The greatest umber is : "<<a;
        }
        else{
                cout<<"The greatest umber is : "<<c;
            }
    }
    else{
        if(b>c){
            cout<<"The greatest number is : "<<b;
        }
        else{
            cout<<"The greatest number is : "<<c;
        }
    }
    return 0;
}