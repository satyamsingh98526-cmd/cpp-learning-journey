//calculate the sum of digits of a number
#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int digitsum =0;
    while(num){
        digitsum += num % 10;
        num /= 10;
    }
    cout<<digitsum<<endl;
    return 0;
}