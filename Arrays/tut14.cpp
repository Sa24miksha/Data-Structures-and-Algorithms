//find missing number - Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

// bruteforce - Naive Approach(Brute-force approach):
// Intuition: For each number between 1 to N, we will try to find it in the given array using linear search. And if we don’t find any of them, we will return the number.

// Approach: 




#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    // Outer loop that runs from 1 to N:
    for (int i = 1; i <= N; i++) {

        // flag variable to check
        //if an element exists
        int flag = 0;

        //Search the element using linear search:
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {

                // i is present in the array:
                flag = 1;
                break;
            }
        }

        // check if the element is missing
        //i.e flag == 0:

        if (flag == 0) return i;
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

//Time Complexity: O(N2)
//Space Complexity: O(1) 


//  Better Approach (using Hashing):
// Intuition:
// Using the hashing technique, we will store the frequency of each element of the given array. Now, the number( i.e. between 1 to N) for which the frequency will be 0, will be returned. Refer to the article link to know more about hashing.

// Approach:



// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>&a, int N) {

//     int hash[N + 1] = {0}; //hash array

//     // storing the frequencies:
//     for (int i = 0; i < N - 1; i++)
//         hash[a[i]]++;

//     //checking the freqencies for numbers 1 to N:
//     for (int i = 1; i <= N; i++) {
//         if (hash[i] == 0) {
//             return i;
//         }
//     }

//     // The following line will never execute.
//     // It is just to avoid warnings.
//     return -1;
// }

// int main()
// {
//     int N = 5;
//     vector<int> a = {1, 2, 4, 5};
//     int ans = missingNumber(a, N);
//     cout << "The missing number is: " << ans << endl;
//     return 0;
// }

//Time Complexity: O(N)
//Space Complexity: O(N)



//Optimal Approch - 

// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>&a, int N) {

//     //Summation of first N numbers:
//     int sum = (N * (N + 1)) / 2;

//     //Summation of all array elements:
//     int s2 = 0;
//     for (int i = 0; i < N - 1; i++) {
//         s2 += a[i];
//     }

//     int missingNum = sum - s2;
//     return missingNum;
// }

// int main()
// {
//     int N = 5;
//     vector<int> a = {1, 2, 4, 5};
//     int ans = missingNumber(a, N);
//     cout << "The missing number is: " << ans << endl;
//     return 0;
// }


// Time Complexity: O(N), where N = size of array+1.
// Reason: Here, we need only 1 loop to get the sum of the array elements. The loop runs for approx. N times. So, the time complexity is O(N).

// Space Complexity: O(1) as we are not using any extra space.
