#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int count = 0;
    while(num>0){
        num = num/10;
        count+=1;
    }
    cout<<"The number of digits is : "<<count;
    return 0;
}