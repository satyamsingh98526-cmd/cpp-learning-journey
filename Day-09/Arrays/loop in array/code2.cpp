// smallest number in array
#include <iostream>
using namespace std;
int main() {
    int size = 5;
    int marks[size];
    for(int i = 0; i < size; i++) {
        cin >> marks[i];
    }
    int smallest = marks[0];
    for(int i = 1; i < size; i++) {
        if(marks[i] < smallest) {
            smallest = marks[i];
        }
    }
    cout << smallest << endl;
    return 0;
}