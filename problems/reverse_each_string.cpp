// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int x=s.length();
        stack<char>sta;
        string res;

        for (int i = 0; i < x; i++)
        {
            /* code */
          
            if(s[i]=='.'){
                
                
                while (!sta.empty())
                {
                    /* code */
                    res+=sta.top();
                    sta.pop();
                }
                res+=s[i];
                
                
            }
            else{
                sta.push(s[i]);
            }
            

            
        }
        while(!sta.empty()){
            res+=sta.top();
            sta.pop();
        }
        return res;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
  