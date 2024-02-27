#include<iostream>
#include<stdio.h>
using namespace std;
bool isvowel(string st,int ind){
    if(st[ind] == 'a'||st[ind] == 'e'||st[ind] == 'i'||st[ind] == 'o'||st[ind] == 'u') return true;
    else return false;
}
int main(){
    string st = "asefgo";
    int left =0;
    int right = st.size()-1;
    while(left<right){
        while(left<right && isvowel(st,left)== false){
            left++;
        } 
        while(left<right && isvowel(st,right)== false){
            right--;
        } 
        char temp = st[left];
        st[left] = st[right];
        st[right] = temp;
    }
    cout<<st<<endl;
    cout<<"singh";
    return 0;
}