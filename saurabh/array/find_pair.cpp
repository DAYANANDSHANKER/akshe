#include<iostream>
using namespace std;
void printpair(int a [],int n){
    int pair = 0;
    for(int i= 0;i<n;i++){
        int curr = a[i];
        for(int j = i+1; j<n;j++){
            cout<<"("<<curr<<"+"<<a[j]<<")";
            pair++;
        }
          cout<<endl;
    }
    cout<<pair;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int a[n];
    for(int i = 0; i< n;i++){
        cin>>a[i];
    }
    printpair(a,n);
return 0;
}
