//number
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){//no of rows
        char ch='A'; 
        for (int j=1;j<=n;j++){//character which is print on rows
           
            cout<<ch;
            ch=ch+1;



        }
        cout<<endl;
    }return 0;
}
