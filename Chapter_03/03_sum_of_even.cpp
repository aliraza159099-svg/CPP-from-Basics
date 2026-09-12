#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int sum = 0;
    int rem = 0;
    int num1 = num;
    while(num>0){
        rem = num%10;
        if(rem%2 == 0){
            sum = sum + rem;
        }
        num = num/10;
    }
    cout<<"The sum of the even digits in "<<num1<<" is : "<<sum;
    return 0;
}