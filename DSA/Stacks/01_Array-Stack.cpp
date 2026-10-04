#include <iostream>
using namespace std;
void push(int item, int &top, int size, int arr[]){
    if(size -1 == top){
        cout<<"No space to add new elements: "<<endl;
        return;
    }else{
        top = top + 1;
        arr[top] = item;
        // cout<<"Item added successfully"<<endl;
    }
}
//the pop function
void pop(int &top){
    if(top<0){
        cout<<"No elements: "<<endl;
        return;
    }else{
        top = top - 1;
        cout<<"Item removed successfully"<<endl;
    }
}
int main(){
    cout<<"implementing astack using array"<<endl;
    int size = 5;
    int arr[size];
    int top = -1;
    bool condition = true;
    int choice;
    int num;
    while(condition){
        cout<<"1. Push an element."<<endl;
        cout<<"2. Pop an element."<<endl;
        cout<<"3. Dispaly."<<endl;
        cout<<"4. Exit."<<endl;
        cin>>choice;
        if(choice == 1){
            cout<<"Enter the element : ";
            cin>>num;
            push(num, top, size, arr);
        }else if(choice == 2){
            pop(top);
        }else if(choice == 3){
            cout<<"The elements are : "<<endl;
            for(int i = 0 ; i<= top ; i++){
            cout<<arr[i]<<" ";
            }
            cout<<endl;
        }else if(choice == 4){
            condition = false;
        }else{
            cout<<"Please enter a valid choice."<<endl;
        }

    }
    return 0;
}