// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int>sta;
        sta.push(-1);
        int ans=0;
        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            if(s[i]=='('){
                sta.push(i);
            }
            else {
                if(!sta.empty()){
                    sta.pop();
                }
                if(!sta.empty()){
                    ans=max(ans,i-sta.top());
                }
                else{
                    sta.push(i);
                }
            }



        }
        

         return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends