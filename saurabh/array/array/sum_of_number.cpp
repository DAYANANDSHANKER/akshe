#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"give input of array"<<endl;
    cin>>n;
    int arr[10];
    cout<<"take input from user"<<endl;
    for(int i =0; i<n;i++)
       cin>>arr[i];\
       cout<<"lets see output"<<endl;
        for(int i =0; i<n;i++)
       cout<<arr[i]<<endl;
return 0;
}