//find the middle element in the stack

#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> s, int &totalsize){
    //if no element
    if(s.size() == 0){
        cout<<"there is no element uin stack"<<endl;
    }
    //base case
    if(s.size() == totalsize/2+1){
        cout<<"middle element is :"<<s.top()<<endl;
        return;
    }

    int temp = s.top();
    s.pop();
    printMiddle(s,totalsize);
    s.push(temp);
}

int main(){
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
s.push(80);
s.push(90);

int totalsize = s.size();
printMiddle(s,totalsize);
return 0;
}