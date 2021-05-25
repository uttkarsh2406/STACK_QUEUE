// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int>q;
        vector<int>a;
        deque<int>b;
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            q.push_back(arr[i]);
        }
        int sum=0;
         
            
        while (!q.empty())
        {
        
            sum=INT_MIN;
            int i=k;

            while (i--)
            {
                if(q.front()>sum){
                    sum=q.front();
                }
                
                
                q.pop_front();
               
                b.push_back(q.front());

            }
            a.push_back(sum);
            
           
            b.pop_back();
            
            while (!b.empty())
            {
                /* code */
                q.push_front(b.back());
                b.pop_back();
            }
             if(q.size()<k){
                break;
            }
            

        }
        return a;
        
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends