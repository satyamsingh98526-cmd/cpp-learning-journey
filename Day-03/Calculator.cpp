#include <iostream>
using namespace std;

int main() {
    //define variables
    string operation;
    double number1,number2;
    //get user input
    cout <<"enter the first number: ";
    cin >>number1;
    cout <<"enter Operation (+,-,%,/,*): ";
    cin>>operation;
    cout<<"enter the second number: ";
    cin>>number2;
    //using if else statement to perform the operation
    if (operation == "+"){
        cout<<"the sum of number is: "<<number1+number2;
    }
    else if (operation == "-"){
        cout<<"difference:"<<number1-number2;
    }
    else if (operation =="*"){
        cout<<"product: "<<number1*number2;
    }
    else if (operation =="/"){
        cout<<"quotient: "<<number1/number2;
    }
    else if (operation =="%"){
        cout<<"remainder:"<<int(number1)%int(number2);    
    }
    else{
        cout<<"invalid operation" ;
    }
    return 0;
    
    

}