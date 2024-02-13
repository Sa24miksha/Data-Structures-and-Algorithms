//Find the number that appears once, and the other numbers twice in an array

//Approch - 
//Bruite Force - Given an array iterate the array once and for each element, iterate the array again and check if the element is repeated or not. If the element is not repeated, then return the element. This approach will take O(n^2) time.

//Code-
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n = nums.size();

//     //Run a loop for selecting elements:
//     for (int i = 0; i < n; i++) {
//         int store = nums[i]; // selected element
//         int cnt = 0;

//         //find the occurrence using linear search:
//         for (int j = 0; j < n; j++) {
//             if (nums[j] == store)
//                 cnt++;
//         }

//         // if the occurrence is 1 return ans:
//         if (cnt == 1) return store;
//     }

//     //This line will never execute
//     //if the array contains a single element.
//     return -1;
//     }
// };



//Better Approch -
//Using map- Create a hash table and store the frequency of each element of the array. Then iterate the hash table and return the element with frequency 1. This approach will take O(n) time and O(n) space.

//code-
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         map<int,int> mp;
//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }
//         for(auto it:mp){
//             if(it.second == 1){
//                 return it.first;
//         }
//     }

//     return -1;
    
//     }
    
// };

//Time Complexity: O(n)
//Space Complexity: O(n)



//Optimal Approch - Using XOR - XOR of a number with itself is 0. So, if we XOR all the elements of the array, then the elements which are repeated twice will become 0 and the element which is not repeated will remain as it is. So, the final answer will be the element which is not repeated.

//Code-

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for( int i=0; i<nums.size(); i++){
            ans^=nums[i];
        }
        return ans;
    }
};