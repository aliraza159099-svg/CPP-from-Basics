#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int hcf = 1;
    // for(int i = 1 ; i<num ; i++){
    //     if(num%i == 0){
    //         hcf = i;
    //     }
    // }
    for(int i = (num/2) ; i > 0 ; i--){
        if(num%i==0){
            hcf = i;
            break;
        }
    }
    cout<<"The hcf of "<<num<<" is : "<<hcf;
    return 0;
}