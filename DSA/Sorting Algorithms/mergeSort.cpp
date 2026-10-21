#include <iostream>
#include <chrono>
/* Only needed for the sake of this example. */
#include <thread>
using namespace std;
#include <cstdlib>
#include <compare>

//function to copy the original array
// Function to copy the original array
int* copyArray(int arr[], int size) {
    int* newArray = new int[size];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    return newArray;
}

//the insertion algorithm
void mergeSort(int arr[],int start, int end){
    if(end > start){
        int mid = (start + end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

    }
}


void long_operation()
{
    /* Simulating a long, heavy operation. */

    using namespace std::chrono_literals;
    std::this_thread::sleep_for(150ms);
}

int main()
{
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    //taking the number of array elemets
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    //array
    int arr[size];
    //initializing the array elements
    for(int i = 0 ; i < size ; i++){
        arr[i] = rand() % 1000;
    }
    
    //the insertion sort calling
    cout<<"Sorting by using the Insertion Algorithm"<<endl;
    //copying the original array
    int* arr2 = copyArray(arr, size);
    auto t1 = high_resolution_clock::now();
    mergeSort(arr, 0, size);
    auto t2 = high_resolution_clock::now();
    /* Getting number of milliseconds as an integer. */
    auto ms_int_2 = duration_cast<milliseconds>(t2 - t1);
    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double_2 = t2 - t1;
    cout << ms_int_2.count() << "ms\n";
    cout << ms_double_2.count() << "ms"<<endl;
    // for(int i = 0 ; i < size ; i++){
    //     cout<<arr2[i]<<" ";
    // }

    return 0;
}
