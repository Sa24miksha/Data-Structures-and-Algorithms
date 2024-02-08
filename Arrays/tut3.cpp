//Check if the array is sorted or not

//Approch - check is the array is sorted by comparing each element with the next element and if the element is greater than the next element then return false else return true

//puedocode
// for(int i=0; i<n; i++){
//     if(arr[i+1]>= arr[i]){
//         return true;
//     }
//     return false;
// }

// time complexity - o(n)

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {7, 36, 42, 18, 58};

    for(int i=0; i<n; i++){
        if(arr[i+1]>= arr[i]){
            return true;
        }
        else{
            return false;
        }
    }
    
    return 0;
}