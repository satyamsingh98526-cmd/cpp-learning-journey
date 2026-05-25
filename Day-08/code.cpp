// Check if a number is a power of 2
//i use the help of chatgpt to solve this problem
#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

if(n > 0 && (n & (n - 1)) == 0) {
    cout << "Power of 2";
}
else {
    cout << "Not a Power of 2";
}
return 0;

}
