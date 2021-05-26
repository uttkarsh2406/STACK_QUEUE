// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int m=0,p=n-1;
        while (m<p)
        {
            /* code */
            if(M[m][p]){
                m++;
            }
            else{
                p--;
            }

        }

        for (int i = 0; i < n; i++)
        {
            /* code */
            if((i!=m) && (M[m][i] || ! M[i][m]))
            return -1;
        }
        return m;
        
        
     
        
        
        
        
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends