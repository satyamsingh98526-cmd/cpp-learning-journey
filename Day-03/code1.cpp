//Find whether the character is upper case or lower case
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    if (ch>='a'&&ch<='z'){
        cout<<"character is in lowercase";
    }
    else{
        cout<<"character is in uppercase";
    }
    return 0;

}