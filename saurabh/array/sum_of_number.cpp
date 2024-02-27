#include<iostream>
using  namespace std;
 
 int main() {
      int a[9];
     int  sum = 0;
       for(int i = 0; i<=8;i++){
        cin>>a[i];

       }
        for(int i = 0; i<=8;i++){
        sum = sum + a[i];
       }
       cout<<sum;
    return 0;
 }