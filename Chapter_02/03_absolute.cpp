#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    if(num >= 0){
        cout<<"The absolute of your number is : "<<num;
    }else{
        cout<<"The absolute of your number is : "<<-num;
    }
}