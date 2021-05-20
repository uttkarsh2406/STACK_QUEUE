// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
       int b=sizeOfStack/2;
       int a[sizeOfStack-1];
       int i=0;
       while (b--)
       {
           /* code */
           a[i]=s.top();
           s.pop();
           i++;
       }
       s.pop();
       while (!s.empty())
       {
           /* code */
           a[i]=s.top();
           s.pop();
          i++;
       }
        for (i = 0; i<sizeOfStack-1; i++)
       {
           /* code */
           s.push(a[i]);

       }
     
       
       
       


       
       
       
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends