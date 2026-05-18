#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for (int j=0;j<i;j++){
            cout<<" ";

        }
        //characters
        for (int j=0; j<n-i;j++){
            cout<<(char)('A'+i);
        }
        cout<<endl;
    }
    return 0;
    
} 