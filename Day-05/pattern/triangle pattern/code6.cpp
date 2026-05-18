#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter tne number of rows you would to print"<<" ";
    cin>>n;
    int num;
    cout<<"enter the number which is start from"<<" ";
    cin>>num;

    for (int i =0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}