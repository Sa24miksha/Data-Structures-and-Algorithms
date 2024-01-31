// Question07 :- Find Redundant Brackets 
#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets( string &s){
 stack<char> stack;
for(int i=0; i<s.length(); i++){
    char ch = s[i];

    //if top ka element in stack is either opening bracket or any operator that might be +,-,*,/ , we will push  
    // it into the stack 

    if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
    stack.push(ch);
    }

    else{
    
    //ch ya to closing bracket hoga ')' ya to any lowercase ka operator
    if(ch == ')'){
    bool isRedundant = true;
    while(stack.top() != '('){
        char top = stack.top();
        if(top == '(' || top == '+' || top == '-' || top == '*' || top == '/' ){
            isRedundant = false ;
        }
        stack.pop();
    }
    }
    }
    return false;
    }
}




int main(){
return 0;
}