// question04 :- Valid Parenthesis

#include<iostream>
#include<stack>
using namespace std;
bool IsValidParenthesis(string expression){

    // we will make a stack and push all the strings elements into it
    stack<char> s;
    for(int i=0; i<expression.length(); i++){
        char ch = expression[i];

    //for opening brackets --- push them in stack
    if( ch == '(' || ch == '{' || ch == '['){
        s.push(ch);
    }
    else{
    //for closing bracket
    if(!s.empty()){
        char top = s.top();

        if(top == '(' && ch == ')' || top == '{' && ch == '}' || top == '[' && ch == ']'){
        s.pop();
     }
     else{
        return false;
     }
    }
    else{
        return false;
    }
  }
}
if(s.empty())
return true;
else 
return false;
}




int main(){

return 0;
}