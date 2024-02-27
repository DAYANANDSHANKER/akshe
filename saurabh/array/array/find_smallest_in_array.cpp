#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"teke input"<<endl;
    int arr[n];
    int max = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
        max = arr[0];
 for(int i =0;i<n;i++){
        if(max>arr[i])
          max = arr[i];
    }
     cout<<"smallest number is "<<max<<endl;

}