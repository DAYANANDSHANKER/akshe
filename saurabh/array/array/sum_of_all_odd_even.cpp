#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"take size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"take input"<<endl;
    int sume = 0;
    int sumo =  0;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(arr[i]%2 == 0)
          sume = sume + arr[i];
        else
          sumo = sumo + arr[i];
    }
    cout<<"sum of even "<<sume<<endl<<"sum of odd  "<<sumo;
return 0;
}