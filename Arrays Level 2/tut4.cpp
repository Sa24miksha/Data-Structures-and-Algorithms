//Stock buy and sell problem

// brute force approach - take 2 loops and find the maximum difference between the elements and then return the maximum difference. this approach takes O(n^2) time complexity.

// code
#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
        }

    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}

//Time complexity - O(n^2)
//Space complexity - O(1)



//Optimized approach -
//Take 2 variables, one to store the minimum price and the other to store the maximum profit. iterate over the array and keep updating the minimum price and the maximum profit. then return the maximum profit. this approach takes O(n) time complexity.  

//code
#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int> &arr) {
    int minPrice = INT_MAX;
    int maxPro = 0;
    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}

//Time complexity - O(n)
//Space complexity - O(1)

