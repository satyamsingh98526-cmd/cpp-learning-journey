//inverted characters
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){//no of row
        //spces
        for (int j=0;j<i;j++){
                cout<<" ";
        }
        //nums
        for (int j=0;j<n-i;j++){
            cout<<char('A'+i);
        }
        cout<<endl;
    }
    return 0;
}