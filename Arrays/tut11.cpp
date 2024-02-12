//Move all zeroes to end of array
//Given an array arr[] of n positive integers. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. Do the mentioned change in the array in-place.

//Example 1:

// Input:
// N = 5
// Arr[] = {3, 5, 0, 0, 4}
// Output: 3 5 4 0 0
// Explanation: The non-zero elements 
// preserve their order while the 0
// elements are moved to the right.


//Approch 1 :- create a variable say count and if arr[i] != 0 then pust the elements in arr[count] and incremeent the count , al last traverse over cound and add 0 to arr[i]




// #include <bits/stdc++.h>
// using namespace std;

// vector<int> moveZeros(int n, vector<int> a) {
//     //temporary array:
//     vector<int> temp;
//     //copy non-zero elements
//     //from original -> temp array:
//     for (int i = 0; i < n; i++) {
//         if (a[i] != 0)
//             temp.push_back(a[i]);
//     }

//     // number of non-zero elements.
//     int nz = temp.size();

//     //copy elements from temp
//     //fill first nz fields of
//     //original array:
//     for (int i = 0; i < nz; i++) {
//         a[i] = temp[i];
//     }

//     //fill rest of the cells with 0:
//     for (int i = nz; i < n; i++) {
//         a[i] = 0;
//     }
//     return a;
// }


// int main()
// {
//     vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int n = 10;
//     vector<int> ans = moveZeros(n, arr);
//     for (auto &it : ans) {
//         cout << it << " ";
//     }
//     cout << '\n';
//     return 0;S
// }

                    //or



class Solution{
public:
    	void pushZerosToEnd(int arr[], int n) {
    	    int count = 0;
           for(int i =0;i<n;i++){
               if(arr[i]!=0){
                   arr[count] = arr[i];
                   count++;
               }
           }
           for(int i =count;i<n;i++){
               arr[i] = 0;
           }
	}
};


//Approch 2 :- 

#include<vector>
class Solution {
public:

    void moveZeroes(std::vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                nums[count] = nums[i];
                count++;
            }
        }
        for(int i=count; i<n; i++){
            nums[i] = 0;
        }
    }
};