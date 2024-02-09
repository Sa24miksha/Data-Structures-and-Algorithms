//Kadanes Algorithm - maximumum subarray sum
// for example we have an array of 5 elements, we have to find the maximum sum of subarray, we will take 2 loops and find the sum of all subarrays and then compare the sum with the maximum sum, and then return the maximum sum. this is a brute force approach and takes time complexity of O(N3) cause we will be required a 3rd pointer say k to iterate over i and j but we can solve this problem in O(n) time complexity using kadanes algorithm.

//KADANES ALGORITHM :- just take 2 variables, one to store the maximum sum and the other to store the current sum, and then iterate over the array and keep adding the elements to the current sum and then compare the current sum with the maximum sum and then return the maximum sum.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 9;
    int nums[9] {-2,1,-3,4,-1,2,1,-5,4};

    int sum = 0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++){
        sum += nums[i];
        maxsum = max(maxsum, sum);

        if(sum <0){
            sum = 0;
        }
    }
    cout<<"The maximum sum of subarray is: "<<maxsum; 
    return 0;
}