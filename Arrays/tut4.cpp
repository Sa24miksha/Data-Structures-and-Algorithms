//Remove duplicate in-place from sorted arrays 


//Brute force approach :- 
// First pass :- Set approch , create a set and then iterate through the array and then insert the elements in the set and then see put the elements of the set in the arrays initial position and then return the size of the array\ 
//Note :- set always stores an unique element in it and it is always sorted


// time complexity - o(nlogn+n) = o(nlogn)

//psuedocode :-
// set<int> s;
// for(int i=0; i<n; i++){
//     s.insert(arr[i]);
// }
// int i=0;
// for(auto it : s){
    // arr[i]=it;
//     index++;
// }


//Optimal approach :- take 2 pointers i and j and then iterate through the array and then compare the elements at i and j and if they are equal then increment j and if they are not equal then increment i and then put the element at j in the position of i and then increment i and j and then return i

//Psuedocode

// int i = 0;
// for(int j=1; j<n; j++){
//     if(arr[j]!=arr[i]){
//         arr[i+1]=arr[j];
//         i++;
//     }
// }
// return( i+1);

//timecomplexity - o(n)
//space complexity - o(1)


//code :-

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1, 1, 2, 3, 3};
    int i =0;
    for(int j =0; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }

    return i+1;
}