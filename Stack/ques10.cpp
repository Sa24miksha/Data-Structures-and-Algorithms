// implemention two stack in am array

#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    // constructor call
    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            // space not available
            cout << "overflow" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void pop1()
    {
        if(top1 == -1){
            //stack is empty
            cout<<"underflow in stack1"<<endl;
        }
        else{
            top1--;
        }
    }

    void push2(int data)
    {
        if(top2-top1 == 1){
            //space is not available
            cout<<"overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=data;
        }
    }

    void pop2()
    {
        if(top2 == size){
            cout<<"underflow in stack2"<<endl;
        }
        else{
            top2++;
        }
    }
};

int main()
{
    stack s(20);

    //insertion
    s.push1(10);
    s.push2(20);
    s.push2(30);
    s.push1(40);
    s.push2(50);
    return 0;
}