// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int maxDiamonds(int A[], int N, int K) {
        // code here
        int sum=0;
        priority_queue<int>a;
        for (int i = 0; i < N; i++)
        {
            /* code */
            a.push(A[i]);
        }
        for (int i = 0; i < K; i++)
        {
            /* code */
            int x=a.top();
            a.pop();
            sum+=x;
            x=x/2;
            a.push(x);
            
        }
        
        return sum;
        

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends