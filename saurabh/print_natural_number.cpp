#include<iostream>
using namespace std;

void natural(int n)
    {
    if(n >= 0)
       {
         if(n%2 != 0){
           cout<< n ;
          }
        natural(n-1);
          
       }
    
     
    }

int main(){
    cout<<"take a number"<<endl;
    int n;
    cin>>n;
    natural(n);
  return 0;
}
