// Question08 :- Minimum cost to make string balance
#include<iostream>
#include<stack>
using namespace std;

int findMinimumCost(string str){

    //odd condition
    if(str.length()%2 == 1){
        return -1;
    }
   
stack<char> s;
for(int i=0; i<str.length(); i++){
char ch = str[i];
//if open brace hai toh stack m push kardo
if(ch == '{'){
s.push(ch);
}
else{
    //ch jo hai vo close brace hai
    if(!s.empty() && s.top() == '{'){
        s.pop();
    }
    else{
        s.push(ch);
    }
  }

}
// stack contains invalid expression now
int a=0, b=0;
while(!s.empty()){
    if(s.top()=='{'){
        b++;
    }
    else{
        a++;
    }
    s.top();
}

int ans =(a+1)/2 + (b+1)/2;
return ans;


}

int main(){

return 0;
}