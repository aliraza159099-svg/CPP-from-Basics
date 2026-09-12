#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int a = 1;
    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}