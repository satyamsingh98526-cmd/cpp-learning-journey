#include <iostream>
using namespace std;

int main() {
int binary;

cout << "Enter a binary number: ";
cin >> binary;

int decimal = 0;
int power = 1;

while(binary > 0) {
    int lastDigit = binary % 10;

    decimal += lastDigit * power;

    power = power * 2;

    binary = binary / 10;
}

cout << "Decimal = " << decimal;
return 0;

}
