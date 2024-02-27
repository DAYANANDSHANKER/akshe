#include<iostream>
using namespace std;
int main(){
    char str[12];
    cout<<"enter your name"<<endl;
    cin>>str;
   for(int i =0;str;i++){
     str[i]=str[i]+ 1;
   }
    cout<<str;
    return 0;

}