// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string removeKdigits(string S, int K) {
         
         string a;
         for(char c:S){

             while (a.length() && a.back() > c && K)
             {
                 /* code */
                 a.pop_back();
                 K--;
             }
             if(a.length() || c!='0'){
                 a.push_back(c);
             }

             
         }
         while (a.length( ) && K--)
         {
             /* code */
             a.pop_back();
         }
         return a.empty() ? "0":a;
         


        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout<<obj.removeKdigits(S,K)<<endl;
    }
    return 0;
}
  // } Driver Code Ends