#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int s= 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int count = 0;
    int i;
    for( i = 0; name[i] != '\0';i++){
        count++;

    }
       return count;
}

int main (){
    char name[5];
    cout<<"enter the name "<<endl;
    cin>>name;
   //name[3] = '\0';
      int len = getlength(name);
    cout<<" your name is  ";
    cout<<"length :"<<len<<endl;
    reverse(name,len);
    cout<<"your nmae is "<< name<<endl;

return 0;
}