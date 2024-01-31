#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
            return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s,target);
    s.push(num);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int data = s.top();
    s.pop();

    reverseStack(s);
    insertAtBottom(s,data);
}

int main(){
stack<int> s;
s.push(2);
s.push(4);
s.push(6);
s.push(8);
s.push(10);

reverseStack(s);

cout<<"printing :"<<endl;
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;

return 0;
}  