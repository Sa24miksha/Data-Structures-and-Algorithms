//Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.
// Input:
// N = 5
// A[] = {-2, 1, -4, 5, 3}
// Output: 1
// Explanation: min = -4, max =  5. Sum = -4 + 5 = 1

//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int sum = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(int i=0; i<N; i++){
            if(A[i] > maxi){
                maxi = A[i];
            }
            if(A[i]<mini){
                mini = A[i];
            }
        }
        sum = maxi+mini;
        
        return sum;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends