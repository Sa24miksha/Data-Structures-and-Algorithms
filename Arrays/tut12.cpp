// Linear Search -  Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

//Approch-
#include<iostream>
using namespace std;
int search(int arr[],int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        return i;
    }
    return -1;
}
