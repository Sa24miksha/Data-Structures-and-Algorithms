#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int data){
    if(s.empty()){
       s.push(data);
       return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s,data);
    s.push(temp);
    
}

int main(){
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

int data = s.top();
    s.pop();

insertAtBottom(s,data);

cout<<"printing :"<<endl;
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
return 0;
}