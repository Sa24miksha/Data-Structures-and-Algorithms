// Question03 :- Delete the middle element of the stack
#include<iostream>
#include<stack>

using namespace std;
void solve(stack<int> &inputStack, int count , int size){

    //base case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    //popping the top element of the stack
    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    solve(inputStack,count+1,size);
    inputStack.push(num);
}       


/*Already given codes*/

void deleteMiddle(stack<int> &inputStack, int n){
    int count = 0;
    solve(inputStack,count,n);

}


int main(){

return 0;
}

