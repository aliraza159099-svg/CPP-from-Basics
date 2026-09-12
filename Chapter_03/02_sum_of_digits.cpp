#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int sum = 0;
    int rem = 0;
    while(num > 0){
        rem = num%10;
        num = num/10;
        sum = sum + rem;
    }
    cout<<"The sum of the digits is : "<<sum;
    return 0;
}