//number
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=1;
    for (int i=1;i<=n;i++){//no of rows
       
        for (int j=1;j<=n;j++){//number which is print on rows
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }return 0;
}
