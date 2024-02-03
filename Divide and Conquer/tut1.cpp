//Merge Sort

#include<iostream>
using namespace std;

int merge(){
    
}

int mergeSort(int* arr, int s, int e){

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
}

int main(){
    int arr[] = {4,5,13,2,12};
    int n = 5;
    int s =0;
    int e = n-1;
    mergeSort(arr,s,e);
return 0;
}