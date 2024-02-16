//Sort an array of 0s, 1s and 2s -

//Brute Force - Approach:   Sorting the array
//Time complexity - O(nlogn)
//Space complexity - O(1)

//Better Approach:  Counting the number of 0s, 1s and 2s
//simply count each number and then do indexing withh the array elements 
//code -

// // } Driver Code Ends
// class Solution
// {
//     public:
//     void sort012(int a[], int n)
//     {
//        int zerocount = 0;
//        int onecount = 0;
//        int twocount = 0;
       
//        for(int i=0; i<n; i++){
//            if(a[i]==0){
//                zerocount ++;
//            }
//            else if(a[i]==1){
//                onecount++;
//            }
//            else{
//                twocount++;
//            }
//        }
//        int j =0;
//        while(zerocount--){
//            a[j++] = 0;
//        }
//        while(onecount--){
//            a[j++] = 1;
//        }
//        while(twocount--){
//            a[j++] = 2;
//        }
//     }
// };

//Time complexity - O(n)
//Space complexity - O(1)


//Optimal Approach: 3 pointer approach
//Approch - Take 3 pointers low, mid and high. low will point to the start of the array, mid will point to the start of the array and high will point to the end of the array.
//If the mid pointer is pointing to 0, swap the low and mid pointers and increment both low and mid pointers.
//If the mid pointer is pointing to 1, increment the mid pointer.
//If the mid pointer is pointing to 2, swap the mid and high pointers and decrement the high pointer.
//code -

#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:

    void sortColors(vector<int>& nums) {
        int start = 0;

        int end = nums.size()-1;
        int i = 0;

        while(i <= end){
            if(nums[i] == 0){
                swap(nums[i], nums[start]);
                i++;
                start++;
            }
            else {
                swap(nums[i], nums[end]);
                end--;
            }
        }
        sort(nums.begin(),nums.end());
    }
};

//Time complexity - O(n)
//Space complexity - O(1)
