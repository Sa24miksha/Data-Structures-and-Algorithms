//Merge Sort

#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    //copy values into respective lengths arrays
    // copy in left array
    int k = s;
    for(int i=0; i<len1; i++){
        left[i]= arr[k];
        k++;
    }

    //copy in right array 
    int l = mid+1;
    for(int i=0; i<len2; i++){
        right[i] =  arr[l];
        l++;
    }

    //merge both the arrays
    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;

    while(leftindex < len1 && rightindex < len2){
        if(left[leftindex] < right[rightindex]){
            arr[mainindex] = left[leftindex];
            mainindex++;
            leftindex++;
        }
        else{
            arr[mainindex] = right[rightindex];
            mainindex++;
            rightindex++;
        }
    }   

    //if left array is still left
    while(leftindex < len1){
        arr[mainindex] = left[leftindex];
        mainindex++;
        leftindex++;
    }

    //if right array is still left  
    while(rightindex < len2){
        arr[mainindex] = right[rightindex];
        mainindex++;
        rightindex++;
    }
    
};

void mergeSort(int* arr, int s, int e){

    //base case
    //if s==e -> single element
    //if s>e -> no element
    if(s >= e){
        return;
    }
    
    int mid = (s+e)/2;
    //left part sort kardo
    mergeSort(arr,s,mid);

    //right part sort kardo
    mergeSort(arr,mid+1,e);

    //merge both the sides 
    merge(arr, s, e);
};

int main(){
    int arr[] = {4,5,13,2,12,17,1,32,64,9};
    int n = 10;
    int s =0;
    int e = n-1;
    mergeSort(arr,s,e);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
return 0;
}