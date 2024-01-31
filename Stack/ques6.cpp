// Question06 :- Sort a stack 

#include<iostream>
#include<stack>
using namespace std;

void SortedInsert(stack<int> &stack , int num){
    //base case 
    if(stack.empty() || !stack.empty() && stack.top() < num){
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    //recursive call
    SortedInsert(stack,num);
    stack.push(n);
    }




void SortStack(stack<int> &stack){
//base case
if(stack.empty()){
    return;
}

int num = stack.top();
stack.pop();

//recursive call
SortStack(stack);
stack.push(num);
SortedInsert(stack,num);
}

int main(){

return 0;
}
