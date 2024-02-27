#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"take input"<<endl;
    cin>>n;
    for(int i = 0; i<= 4;i++){
        for(int j = i;j<=n;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
 }