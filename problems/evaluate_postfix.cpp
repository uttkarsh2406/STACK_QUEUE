// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int>a;
        
        for (int i = 0; i < s.length(); i++)
        {
            /* code */
            if(s[i]==' '){
                continue;

            }
            else if(isdigit(s[i])){
                a.push(s[i]-'0');
            }
            else{
                int n=a.top();
                a.pop();
                int m=a.top();
                a.pop();

                switch (s[i])
                {
                case /* constant-expression */'+':
                    /* code */
                     a.push(m+n);
                    break;
                case '-':
                    a.push(m-n);
                    break;
                case '*':
                    a.push(m*n);
                    break;
                case '/':
                   a.push(m/n);
                   break;

                }
            }
        }
        int z=a.top();
        a.pop();
        return z;
        

    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends