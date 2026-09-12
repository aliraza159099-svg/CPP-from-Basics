#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
     if (num <= 1) {
        cout << "The number is neither Prime nor Composite.";
        return 0; 
    }
    bool comp = true;
    for(int i = 2 ; i <= num/2 ; i++){
        if(num%i == 0){
            comp = false;
            break;
        }
    }
    // if(comp) {
    //     cout <<"The number is Prime";
    // }
    // else {
    //     cout<<"The number is Composite";
    // }
    cout << (comp ? "The number is Prime" : "The number is Composite");
}