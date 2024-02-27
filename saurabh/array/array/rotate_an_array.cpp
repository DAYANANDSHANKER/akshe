#include<iostream>
using namespace std;
int main(){
    int arr[5];
     int temp =0;
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
     temp = arr[0];
     cout<<"print the value"<<endl;
     for(int i = 0;i<4;i++){
        arr[i] = arr[i+1];
      cout<<arr[i]<<endl;  
    }
    arr[4] = temp;
    cout<<arr[4];
return 0;
}