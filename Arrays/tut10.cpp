// Left rotate an array by d place - optimal approch 

// 3 reverse techniques - firstly reverse the array from 0 to d-1, then reverse the array from d to n-1 and then reverse the whole array.

//Time complexity of this code is O(2n) and space complexity is O(1) cause we are not using any extra space.


#include<iostream>
#include <algorithm>
using namespace std;

void leftRotate(int arr[], int n, int d){
    //reverse from 0 to arr+d
    reverse(arr, arr+d);

    //reverse from arr+d to arr+n
    reverse(arr+d, arr+n);

    //reverse the whole array
    reverse(arr, arr+n);
}

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5}; 
    
    int d = 3;

    //calling the function
    leftRotate(arr, n, d);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}