// Left rotate an array by d place 

//brute-force approch - simply store the first d elements of an array into a temporary array and then shift all the elements of an array to the left by d place and then store the value of temp into the last d elements of an array.

#include<iostream>
#include<climits>
using namespace std;

void leftRotate(int arr[], int n, int d){
    int temp[3];

    //store the first d elements of an array into a temporary array
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    //shift the original array elements to the left by d place
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }


    //push the temp array elements behind the original array
    for(int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
    }
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

//Time Complexity of this code is O(n+d) and space complexity is O(d) cause we are using a temporary array of size d.