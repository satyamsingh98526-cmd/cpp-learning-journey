// reverse a number
#include <iostream>
using namespace std;

int reverseNum(int n) {
int rev = 0;
while(n > 0) {
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit; 
    n = n / 10;
}
return rev;

}
int main() {
int n;
cout << "Enter a number: ";
cin >> n;
cout << "Reversed Number = " << reverseNum(n);
return 0;
}
