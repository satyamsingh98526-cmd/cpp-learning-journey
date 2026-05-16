#include <iostream>
using namespace std;
int main(){
    int oddsum = 0;
    for(int i = 1; i <= 23; i++){
        if(i % 2 != 0){
            oddsum += i;
        }
    }
    cout << "Sum of odd numbers from 1 to 23 is: " << oddsum << endl;
    
    return 0;
}