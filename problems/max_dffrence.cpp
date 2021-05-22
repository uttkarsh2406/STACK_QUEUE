// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    /*You are required to complete this method */
    void left_small(int A[], int n,int la[])
    {
      //Your code here
      stack<int>a;
      
      for (int i = 0; i < n; i++)
      {
          /* code */
          while (!a.empty() && a.top()>=A[i])
          {
              /* code */
              
                  a.pop();
              
          }
          if(a.empty()){
              la[i]=0;
          }
          else {
              la[i]=a.top();

          }
          a.push(A[i]);
          
      }
      
    }
    int findMaxDiff(int a[],int n){

        int ls[n];
        left_small(a,n,ls);
        reverse(a,a+n);
        int rs[n];
        left_small(a,n,rs);
        int ans=-1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            ans=max(ans,abs(ls[i]-rs[n-1-i]));
        }
        return ans;

    }


};

// { Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}


  // } Driver Code Ends