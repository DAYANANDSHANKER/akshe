#include<iostream>
using namespace std;

int add(int n){
    //int s;
    if (n == 1)
      return 1;
     
   
    return  n + add(n-1);;
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
   int k =  add(n);
   cout<<k<<endl;
 return 0;
}
