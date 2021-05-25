// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        // Your code here
          vector <vector <int>> res;
    	vector <int> temp;
    	int i = 0;
    
    	int t, ls = 1;
    	while (i < n)
    	{
    		t = (1 << ls) - 1;
			cout<<ls<<" "<<(1<<ls)<<endl;
            cout<<ls<<" "<<t<<" "<<n<<endl;
    		t = min (t, n);
    		temp.clear ();
    		sort (arr + i, arr + t);
    		for (int j = i; j < t; ++j)
    		{
    			temp.push_back (arr[j]);
    		}
    		i = t;
    		ls++;
    		res.push_back (temp);
    	}
    	return res;

    }
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal  // } Driver Code Ends