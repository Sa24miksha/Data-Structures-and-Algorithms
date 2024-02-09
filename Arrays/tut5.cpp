//Given a sorted array A[] of size N, delete all the duplicated elements from A[]. Modify the array such that if there are X distinct elements in it then the first X positions of the array should be filled with them in increasing order and return the number of distinct elements in the array.

// Note:
// 1. Don't use set or HashMap to solve the problem.
// 2. You must return the number of distinct elements(X) in the array, the driver code will print all the elements of the modified array from index 0 to X-1 as output of your code.


#include <iostream>
using namespace std;

class Solution {
public:
    int remove_duplicate(int a[], int n) {
        int ans = 0;
        int i = 0;
        while (i < n) {
            if (a[i] != a[i + 1]) {
                a[ans++] = a[i];
            }
            i++;
        }
        return ans;
    }
};

int main() {
    int a[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(a) / sizeof(a[0]);
    
    Solution sol;
    int uniqueCount = sol.remove_duplicate(a, n);

    cout << "Unique elements after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}