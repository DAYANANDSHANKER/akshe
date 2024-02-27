#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"give input of array"<<endl;
    cin>>n;
    int arr[10];
    int sum = 0;
    cout<<"take input from user"<<endl;
    for(int i =0; i<n;i++){
       cin>>arr[i];
    
       sum = sum + arr[i];
    }
       cout<<"lets see output"<<endl;
       int avg = (sum/n);
        cout<<"average of array is/t"<<avg<<endl;
return 0;
}