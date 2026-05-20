#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int r;
    cout<<"enter the value of r = ";
    cin>>r;
    int factn = 1;
    for(int i=1; i<=n; i++){
        factn *= i;
    }
    int factr = 1;
    for(int i=1; i<=r; i++){
        factr *= i;
    }
    int factnr = 1;
    for(int i=1; i<=n-r; i++){
        factnr *= i;
    }
    int combination = factn/(factr*factnr);
    cout<<"the combination of "<<n<<" and "<<r<<" is "<<combination<<endl;
    return 0;
}