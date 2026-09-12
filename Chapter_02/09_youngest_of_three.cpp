#include<iostream>
using namespace std;
int main(){
    int ali, bally,sachan;
    cout<<"Enter age of Ali : ";
    cin>>ali;
    cout<<"Enter age of Bally : ";
    cin>>bally;
    cout<<"Enter age of Sachan : ";
    cin>>sachan;
    if(ali<bally){
        if(ali<sachan){
            cout<<"The youngest is Ali ";
        }
        else{
                cout<<"The youngest is Sachen ";
            }
    }
    else{
        if(bally<sachan){
            cout<<"The youngest is Bally ";
        }
        else{
            cout<<"The youngest is Sachen ";
        }
    }
    return 0;
}