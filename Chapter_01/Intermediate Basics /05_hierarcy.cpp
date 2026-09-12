#include<iostream>
using namespace std;
// in BODMAS divison and multiplication has the same 
// precidance and it such a case we mve left to right 
int main(){
    int x = 2 * 5/3;
    cout<<"x = "<<x;

    x = 2 + 6 - 4 * 3/2;
    cout<<"\nx = "<<x;

    x = (2 + 6 - 4) * 3/2;
    cout<<"\nx = "<<x;
    return 0;
}