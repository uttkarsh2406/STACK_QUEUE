// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int>sta;
       vector<int>a;
       sta.push(0);
       a.push_back(1);
       for (int i =1 ; i < n; i++)
       {
           /* code */
           while (!sta.empty() && price[sta.top()]<=price[i])
           {
               /* code */
               sta.pop();
           }
               a.push_back(sta.empty() ? (i+1) : (i-sta.top()));
               sta.push(i);

           
           
       }
       return a;
       

       


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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends