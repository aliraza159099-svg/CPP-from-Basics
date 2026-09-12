#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    for(int i = 1 ; i <= num ; i++){
        for(int j = 0 ; j < num ; j++){
            cout<<(char)(97+j)<<" ";//change 65 by 97 for small case alphabets
        }
        cout<<endl;
    }
    return 0;
}