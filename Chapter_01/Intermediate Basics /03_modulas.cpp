#include<iostream>
using namespace std;
int main(){
    int x = 5, y = 2;
    cout<<"The modulas of x and y is : "<<x%y;

    // if x is smaller than y then the modulas is x 

    x = 5 , y = 17;
    cout<<"\nThe modulas of x and y is : "<<x%y;

    // if y is negative then answer is ame as x%y 
    x = 5, y =  -2;
    cout<<"\nThe modulas of x and y is : "<<x%y;

    // but if x is negative the % will be -(x%b)
    x = -5, y = 3;
    cout<<"\nThe modulas of x and y is : "<<x%y;
  
    return 0;
}