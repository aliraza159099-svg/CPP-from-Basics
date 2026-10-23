#include <iostream>
void initialized(int array[], int size , int value){
    for(int i =0; i< size ; i++){
        array[i] = value;
    }
}

//deleting from the list
int* deleteFirst(int array[],int size){
    //creating a new array to store the old console
    int* newList;
    
    int newSize = size - 1;
    newList = new int[newSize];
    for(int i =0; i< newSize ; i++){
        newList[i] = array[i + 1];
    }
    return newList;
    
}
//ading an element in front
int* addFront(int array[],int size, int value){
    //creating a new array to store the old console
    int* newList;
    int newSize = size + 1;
    newList = new int[newSize];
    
    for(int i = size ; i > 0 ; i--){
        newList[i] = array[i-1];
    }
    newList[0] = value;
    return newList;
    size++;
}
int main() {
   //dynamically creatinf an array of 5 size
    int* array = new int[5];
    initialized(array, 5, 5);
    
    //printinfg all the elements on the console
    for(int i =0; i< 5 ; i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n\nAfter deleting the first element from the list\n ";
    int* newList1 = deleteFirst(array,5);
    for(int i =0; i< 4 ; i++){
        std::cout<<newList1[i]<<" ";
    }
    
    std::cout<<"\n\nAfter adding  the first element on the list\n ";
    int* newList2 = addFront(array,5,7);
    int* newList3 = addFront(newList2,5,2);
    int* newList4 = addFront(newList3,5,21);
    for(int i =0; i< 5 ; i++){
        std::cout<<newList4[i]<<" ";
    }
    return 0;
}
