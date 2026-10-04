#include <iostream>
using namespace std;
void push(int item, int &top, int size, int arr[]){
    if(size -1 == top){
        cout<<"No space to add new elements: "<<endl;
        return;
    }else{
        top = top + 1;
        arr[top] = item;
        cout<<"Item added successfully"<<endl;
    }
}
int main(){
    cout<<"implementing astack using array"<<endl;
    int size = 5;
    int arr[size];
    arr[0] = 23;
    arr[1] = 34;
    int top = 1;
    push(67, top, size, arr);
    for(int i = 0 ; i<= top ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}