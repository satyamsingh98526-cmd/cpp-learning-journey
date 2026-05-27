#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    cout<< "in function\n";
    for (int i = 0; i < size; i++) {
        arr[i] = 2*arr[i]; // Double each element
    }
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    changeArr(arr, n); // Pass the array to the function

    cout << "Array after modification: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print modified array
    }
    cout << endl;

    return 0;
}