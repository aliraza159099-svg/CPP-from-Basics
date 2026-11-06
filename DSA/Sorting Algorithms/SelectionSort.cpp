#include <iostream>
#include <vector>
using namespace std;


//the selction Sort algorithm
void selectionSort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        int k = i; //index of the mininum 
        for(int j = i+1; j < arr.size(); j++){
            //if an element s smaller than the first of the array then it will repalce otherwise not
            if (arr[j] < arr[k]){
                k = j;
            };
        }
          swap(arr[i],arr[k]);        
    }
}

void printArray(vector<int> &arr) {
    for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {1,64, 25,5,6, 19, 12, 22, 11};

    cout << "\nOriginal array: ";
    printArray(arr); 

    selectionSort(arr);

    cout << "\nSorted array: ";
    printArray(arr);

    return 0;
}