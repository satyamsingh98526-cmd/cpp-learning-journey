//number

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){//no of row
        
        for (int j=i+1;j>0;j--){
            cout<<j<<" ";

        }
        cout<<endl;
    }
    return 0;

}   