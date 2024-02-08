//Find the second largest element from an array 

//Brute force - " Sort the entire array and then return the second last element which is arr[n-2]" if there are no duplicates in the array
//if there are duplicates in an array then sort and then iterate through arr[n-2] the array and then return the second last element which is not equal to the last element

// time complexity - o(nlogn)




//Optimal approch - "Initialize largest=arr[0] and secoundLargest=arr[0] and then iterate through the array and compare each element with largest and secoundLargest and if the element is greater than largest then update secoundLargest with largest and largest with the element and if the element is greater than secoundLargest and not equal to largest then update secoundLargest with the element and then return secoundLargest"

// time complexity - o(n)   

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {4, 5, 15, 20, 87};
    int largest = arr[0];
    int secoundLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secoundLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secoundLargest && arr[i] != largest) {
            secoundLargest = arr[i];
        }
    }

    cout << "Second Largest Element: " << secoundLargest << endl;
}
