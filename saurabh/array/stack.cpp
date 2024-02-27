#include<iostream>
#include<stack>
using namespace std;
  class Stack {
    private:
       int *arr;
       int top;
       int size;
    public:
       Stack(int size){
        this -> size = size;
        arr = new int[size];
        top  = -1;
       }
       
       void push(int element){
           if(size - top > 1){
                top++;
              arr[top]= element;

       }
           else
            cout<<"stack overflow";
  }
     int peek(){
      if(top>= 0){
           return arr[top];
      }
      else
         cout<<"stack is empty";
         return -1;
     }
  };

  int main(){
      Stack st(5);

       st.push(78);
       st.push(62);
         st.push(98);
         cout<<st.peek()<<endl;
    return 0;
  }