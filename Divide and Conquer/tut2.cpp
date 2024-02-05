//Quick Sort 

#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    //step01. choose pivot element , here we take the first elemet as pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //step02. find the number of elements smaller than pivot element and store its count 
    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    //step03. swap the pivot element with the element at the count index
    int rightPivotIndex = s+count;
    swap(arr[pivotIndex],arr[rightPivotIndex]);
    pivotIndex = rightPivotIndex;

    //step04. Left part of pivot must have small elements and right part of pivot must have large elements

    int i = s;
    int j = e;

    while( i < pivotIndex && j > pivotIndex){
        if(arr[i] <= pivotElement){
            i++;
        }
        else if(arr[j] > pivotElement){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

}

void quickSort(int arr[], int s, int e){

    //base case
    if(s >=e ){
        return ;
    }

    //partition logic returns pivot index
    int p = partition(arr,s,e);

    //recursively sort the left and right part
    //left part
    quickSort(arr,s,p-1);

    //right part
    quickSort(arr,p+1,e);
}

int main(){
    int arr[] = {8,1,3,4,20,50,30};
    int n = 7;
    int s = 0;
    int e = n-1;

    quickSort(arr,s,e);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

return 0;
}