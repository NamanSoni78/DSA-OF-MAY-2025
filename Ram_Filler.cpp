#include <iostream>
using namespace std;
int main()
{
    // Calculate number of elements to consume about 1 GB RAM
    // 1 GB = 1073741824 bytes, each long long int = 8 bytes
    int arrSize = 2107483447;
    // cout<<"IS your system is So powerful (0/1): ";
    // int inp;
    // cin>>inp;
    // if (inp==1){
    //     arrSize = 2147483647;
    // }
    // else if (inp==0){
    //     arrSize = 1847483647;
    // }
    const size_t numElements = arrSize / sizeof( long long int ); // about 134,217,728

    cout << "Allocating array with " << numElements << " elements (~1 GB RAM)" << endl;

    // Dynamically allocate array on the heap
    long long int *b = new (nothrow) long long int[numElements];

    if (!b) {
        cerr << "Memory allocation failed!" << endl;
        return 1;
    }

    // Initialize first element to 9999999999999
    b[0] = 9999999999999999LL;

    // Optionally initialize remaining elements if needed (commented out to save time)
    for (size_t i = 999999; i < numElements; i++) {
        b[i] = 0;
    }

    // Show size of array in bytes
    size_t arraySize = numElements * sizeof(long long int);
    cout << "Array size: " << arraySize << " bytes" << endl;

    // Use the array for whatever you want here...

    // Cleanup
    delete[] b;

    // cout << "Press Enter to exit...";
    // cin.ignore(); // Waits for user input
    // cin.get();
    return 0;
}