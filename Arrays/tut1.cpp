//Find the largest element in an array 

// 1. brute force method - " Sort the entire array and then return the last element which s arr[n-1]"

// time complexity - o(nlogn)

//2. Optimal/ Better - "Initialize max=arr[0] and then iterate through the array and compare each element with max and if the element is greater than max then update max with the element and then return max"

// time complexity - o(n)

//Code :- 

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {7,36,42,18,58};
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The largest element in the array is: "<<max;
    return 0;
}