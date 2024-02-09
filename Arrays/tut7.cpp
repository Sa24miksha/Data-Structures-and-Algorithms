//Left rotate an array by one place 

// approch - simply store the first element of an array into a temporary variable and then shift all the elements of an array to the left by one place and then store the value of temp into the last element of an array.

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time complexity of this code is O(n) and space complexity is O(1) cause we are not using any extra space.