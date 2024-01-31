//implementation of stack using array

#include<iostream>
using namespace std;
class Stack {
public:
//properties
int *arr;
int top ;
int size;

//behaviour
Stack(int size){
    arr = new int[size];
    this -> size = size;
    top = -1;
}

void push(int data){
     if(size - top > 1){
        //that means size is available
        top++;
        arr[top]=data;
     }
     else{
        //space not available
        cout<<"stack is full , stack overflow"<<endl;
     }
}

void pop(){
      if(top == -1){
        cout<<"stack underflow, is empty"<<endl;
      }
      else{
        top--;
      }
}

bool isEmpty(){
       if(top == -1){
        return true;
       }
       else{
        return false;
       }
}

int getTop(){
     if(top == -1){
     cout<<"there is no element in stack"<<endl;
    }
     else{
      return arr[top];
    }

}

};

int main(){
//creation
Stack s(10);


//insertion
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

while(!s.isEmpty()){
    cout<< s.getTop() <<endl;
    s.pop();
}

return 0;
}