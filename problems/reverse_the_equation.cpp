// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<char>a;
            string o;
            int k=0;
            for (int i = s.length()-1; i >= 0; i--)
            {    if(s[i]=='+' || s[i]=='*' || s[i]=='/' || s[i]=='-'){
                while (!a.empty())
                {
                    /* code */
                    o+=a.top();
                    a.pop();

                }
                o+=s[i];

                
            }
            else{
                a.push(s[i]);
            }
                
            }
            while (!a.empty())
            {
                /* code */
                o+=a.top();
                a.pop();
            }
            return o;
            

            
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends