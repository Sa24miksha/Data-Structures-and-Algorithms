// Leader in an array - a leader element is the eleht greater than all the elements presnt at the right of it in the array.

// brute force approach - take 2 loops and find the maximum difference between the elements and then return the maximum difference. this approach takes O(n^2) time complexity.
//code :-

#include<iostream>
using namespace std;
#include<vector>


vector<int> printLeadersBruteForce(int arr[], int n) {
    vector<int> ans;
    for(int i=0; i<n; i++){
        int leader = true;
        for(int j = i+1; j<n; j++){
            if(arr[j]>arr[i]){
                leader = false;
                break;
            }
        }
        if(leader == true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
};


int main() {
    
  // Array Initialization.
  int n = 6;
  int arr[6] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeadersBruteForce(arr,n);
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}

//Time complexity - O(n^2)
//Space complexity - O(1)

//Optimized approach - By traversing the array from right to left and keeping track of the maximum element found so far. if the current element is greater than the maximum element found so far, then it is a leader. this approach takes O(n) time complexity.

//code

// vector<int> printLeaders(int arr[], int n) {
//     int maxi = INT_MIN;  // Represents the maximum value encountered so far
//     vector<int> ans;
//     for(int i=n-1; i>=0; i--){
//         if(arr[i]>maxi){
//             maxi= arr[i];
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;


//Time complexity - O(n)
//Space complexity - O(1)