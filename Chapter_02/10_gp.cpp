#include<iostream>
using namespace std;
int main(){
    // print the gp of 3 12 48 ......
    int num,num1;
    cout<<"Enter your number : ";
    num1=3;
    cin>>num;
    for(int i = 1 ; i<=num ; i++){
        cout<<num1<<" ";
        num1 = 4 * num1;
    }
    return 0;
}