#include <iostream>
#include <chrono>
/* Only needed for the sake of this example. */
#include <thread>
using namespace std;
#include <cstdlib>
#include <compare>
#include <vector>

//function to copy the original array
// Function to copy the original array
int* copyArray(int arr[], int size) {
    int* newArray = new int[size];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    return newArray;
}
// Partition function using Hoare's partition scheme using do while
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
//Partion using the median of three
/** Partition function using Median-of-Three and Hoare's scheme with do-while
int partitionMedian3(int arr[], int low, int high) {
    // Step 1: Find the center index
    int center = (low + high) / 2;

    // Step 2: Sort low, center, and high elements (Median-of-Three setup)
    if (arr[center] < arr[low])
        swap(arr[low], arr[center]);
    if (arr[high] < arr[low])
        swap(arr[low], arr[high]);
    if (arr[high] < arr[center])
        swap(arr[center], arr[high]);

    // Step 3: Hide the pivot (which is at 'center') into the second-to-last position (high - 1)
    swap(arr[center], arr[high - 1]);
    int pivot = arr[high - 1]; //

    // Step 4: Setup pointers for the inner section
    int p = low;          // Starts at low (since arr[low] is guaranteed <= pivot now)
    int q = high - 1;     // Starts at the hidden pivot position

    while (true) {
        // Find leftmost element greater than or equal to pivot
        do {
            p++;
        } while (arr[p] < pivot);

        // Find rightmost element smaller than or equal to pivot
        do {
            q--;
        } while (arr[q] > pivot);

        // If pointers cross, partitioning of this section is complete
        if (p >= q)
            break;

        // Swap elements
        int temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
    }

    // Step 5: Restore the pivot from its hiding place (high - 1) to its final home (at index p)[cite: 3]
    swap(arr[p], arr[high - 1]);

    // Return the split index where the pivot ended up
    return p;
}

*/

//Lomuto partition scheme, here the pivot index is the element that we wanna make the pivot that might be the low element or the highest
int partion(vector<int> arr, int low, int high, int pivotIndex){
    int pivot = arr[pivotIndex];
    swap(arr[pivotIndex],arr[high]);
    int index = low;
    for(int i = low; i < high; i++){
        if(arr[i] < pivot){
            swap(arr[i], arr[index]);
            index++;
        }
    }
    swap(arr[index], pivot);
    return index;
}
// // Partition function using Hoare's partition scheme with while loop
// int partition(int arr[], int low, int high) {
//     int pivot = arr[low]; // Choose the first element as pivot
//     int p = low ;
//     int q = high;

//     while (true) {
//         // Find leftmost element greater than or equal to pivot
//         while (arr[p] < pivot)p++;

//         // Find rightmost element smaller than or equal to pivot
//         while (arr[q] > pivot)q--;

//         // If pointers cross, partition is complete
//         if (p >= q)
//             return q;

//         // Swap elements
//         int temp = arr[p];
//         arr[p] = arr[q];
//         arr[q] = temp;
//     }
// }

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
