// Two Sum : Check if a pair with given sum exists in Array
// Problem Statement: Given an array of integers arr[] and an integer target.

//Brute Force - Approach:

// First, we will use a loop(say i) to select the indices of the array one by one.
// For every index i, we will traverse through the remaining array using another loop(say j) to find the other number such that the sum is equal to the target (i.e. arr[i] + arr[j] = target).

//Code - 
// #include <iostream>
// using namespace std;

// string twoSum(int n, vector<int> &arr, int target) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == target) return "YES";
//         }
//     }
//     return "NO";
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 1: " << ans << endl;
//     return 0;
// }

//Time Comlexity - O(n^2)
//Space Complexity - O(1)

//Better Approach:

//code :-
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> mpp;
//     for (int i = 0; i < nums.size(); i++) {
//         int num = nums[i];
//         int moreNeeded = target - num;
//         if (mpp.find(moreNeeded) != mpp.end()) {
//             return {mpp[moreNeeded], i};
//         }
//         mpp[num] = i;
//     }
//     return { -1, -1};
//     }
// };

//Time Complexity - O(n)
//Space Complexity - O(n)


//Optimal Approach: 2 pointer approach 


//code -

#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}

//Time Complexity: O(N) + O(N*logN), where N = size of the array.
// Reason: The loop will run at most N times. And sorting the array will take N*logN time complexity.

// Space Complexity: O(1) as we are not using any extra space.

