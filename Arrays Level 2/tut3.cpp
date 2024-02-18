//Majority Elements - elements that occour more than n/2 times

//Approach 1 - Brute force - O(n^2)
//take two pointers and check for each element if it is majority element or not by checking the count of the element in the array  if it is greater than n/2 then return the element else return -1

//code - 

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=0; i<n; i++){
//             int count = 0;
//             for(int j=0; j<n; j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//             }
//             if(count > (n/2)){
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };

//Time complexity - O(n^2)
//Space complexity - O(1)


//Approach 2 - Using map 
//Take a map and store the count of each element in the map and then check for the element whose count is greater than n/2 and return that element

//code

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         map<int, int>mp;
//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }
//         for(auto it :mp){
//             if(it.second> (n/2)){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };

//Time Complexity: O(N*logN) + O(N), where N = size of the given array.
// Space Complexity: O(N) as we are using a map data structure.

//Approach 3 - Using Moore's Voting Algorithm
//Take a candidate and count variable and initialize the candidate with the first element of the array and count with 1.
//Iterate through the array and if the current element is equal to the candidate then increment the count else decrement the count.
//If the count becomes 0 then update the candidate with the current element and set the count to 1.
//Return the candidate.

//code

#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:

    int majorityElement(vector<int>& nums) { 
        int candidate = nums[0]; 
        int count = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                candidate = nums[i];
                count = 1;
            }
        }
        return candidate;
    }
};
int main(){
    Solution s;
    vector<int>nums = {2,2,1,1,1,2,2};
    cout<<s.majorityElement(nums);
    return 0;
}


//Time complexity - O(n)
//Space complexity - O(1)