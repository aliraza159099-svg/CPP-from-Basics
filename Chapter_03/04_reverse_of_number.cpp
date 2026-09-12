#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int rem = 0,rem1 = 0;
    int reverse = 0;
    
    while(num > 0){
        rem = num%10;
        reverse = reverse * 10 + rem1;
        num = num/10;
        rem1 = num%10;
    }
    cout<<"The reverse is : "<<reverse;
    return 0;
}