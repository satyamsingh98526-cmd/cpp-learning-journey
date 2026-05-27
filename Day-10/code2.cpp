// find largest and smallest index in an array
#include <iostream>     
using namespace std;    

int main() {        
    int n;
    cout << "Enter the number of elements in the array: ";
    if (!(cin >> n) || n <= 0) return 0;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int idx_largest = 0;
    int idx_smallest = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[idx_largest]) idx_largest = i;
        if (arr[i] < arr[idx_smallest]) idx_smallest = i;
    }

    cout << "Largest element: " << arr[idx_largest] << " at index " << idx_largest << endl;
    cout << "Smallest element: " << arr[idx_smallest] << " at index " << idx_smallest << endl;
    return 0;
}