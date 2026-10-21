#include <iostream>
using namespace std;

void linearSearch(int a[],int num, int size){
    bool find = false;
    for(int i = 0 ; i < size ; i++){
        if(a[i] == num ){
            cout<<"The elemet is in the lsit : "<<a[i]<<endl;
            find = true;
        }
    }
    if(find == false){
        cout<<"The element is not in the list. "<<endl;
    }
}
int main(){
    //in this code we are going to search for an element in an array
    int arr[10] = {12,34,54,75,87,45,98,23,65,39};
    linearSearch(arr,3,10);
}