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
// Partition function using Hoare's partition scheme
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choose the first element as pivot
    int p = low - 1;
    int q = high + 1;

    while (true) {
        // Find leftmost element greater than or equal to pivot
        do {
            p++;
        } while (arr[p] < pivot);

        // Find rightmost element smaller than or equal to pivot
        do {
            q--;
        } while (arr[q] > pivot);

        // If pointers cross, partition is complete
        if (p >= q)
            return q;

        // Swap elements
        int temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
    }
}

// QuickSort Algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the split point index
        int pi = partition(arr, low, high);
        // Recursively sort elements before and after partition
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
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
    cout<<"Sorting by using the Quick_Sorrt Algorithm : ";
    //copying the original array
    int* arr2 = copyArray(arr, size);
    auto t1 = high_resolution_clock::now();
    quickSort(arr2, 0, size);
    auto t2 = high_resolution_clock::now();
    /* Getting number of milliseconds as an integer. */
    auto ms_int_2 = duration_cast<milliseconds>(t2 - t1);
    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double_2 = t2 - t1;
    //cout << ms_int_2.count() << "ms\n";
    cout << ms_double_2.count() << "ms"<<endl;
    // for(int i = 0 ; i < size ; i++){
    //     cout<<arr2[i]<<" ";
    // }
    for(int i = 0 ; i < size ; i++){
        cout<<" "<<arr2[i];
    }
    cout<<endl;
    return 0;
}
