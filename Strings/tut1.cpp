//Reverse each word in a given string
// Input:
// S = "i.like.this.program.very.much"
// Output: 
// i.ekil.siht.margorp.yrev.hcum
// Explanation: 
// The words are reversed as
// follows:"i" -> "i","like"->"ekil",
// "this"->"siht","program" -> "margorp",
// "very" -> "yrev","much" -> "hcum".



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        int i=0;
        for (int j=0;j<s.size();j++){
            
            if(s[j]=='.'){
            
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
            }
        }
        
    reverse(s.begin()+i,s.end());
    return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// } Driver Code Ends