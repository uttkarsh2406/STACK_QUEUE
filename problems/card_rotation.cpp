// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution {
public:    
    vector<int> rotation(int n)
    {
        // Code Heree
        vector<int>res;
        int i;
        int arr[1000]={0};
        queue<int>q;

        for (int i = 0; i < n; i++)
        {
            /* code */
            q.push(i);
        }
        i=1;
        while (!q.empty())
        {
            /* code */
            int j=0;
            while (j<i)
            {
                /* code */
                int x=q.front();
                q.pop();
                q.push(x);
                j++;
            }
            int x=q.front();
            if(arr[x]!=0){
                res.push_back(-1);
                return res;
            }
            q.pop();
            arr[x]=i;
            i++;

            

        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            res.push_back(arr[i]);
        }
        return res;
        
        
        
    }
};


// { Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int > ans;
        ans = obj.rotation(n);
        for(int i:ans)
            cout<< i << " ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends