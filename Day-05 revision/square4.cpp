//characters
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='A';
    for (int i=1;i<=n;i++){//no of rows
        for (int j=1;j<=n;j++){//number which is print on rows
         cout<<ch;
             ch++;
        }
        cout<<endl;
    }return 0;
}
