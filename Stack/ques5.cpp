// Question05 :- Insert an element at the bottom of the given stack 

#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }

    //pop the top
    int num = s.top();
    s.pop();

    solve(s,x);
    s.push(num);
}


stack<int>PushAtBottom(stack<int> &myStack , int x){
solve(myStack, x);
return myStack;
}
int main(){

return 0;
}