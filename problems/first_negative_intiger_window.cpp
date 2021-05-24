// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends




vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
     vector<long long>a;
     long long max=INT_MAX;
     for (long long  i = 0; i <=N-K; i++)
     {
         /* code */
         max=0;
         for (long long j = i; j < i+K; j++)
         {
             /* code */
             if(A[j]<max){
                 max=A[j];
                 if(max<0){
                     a.push_back(max);
                     break;
                 }
            }
            if(j==i+K-1){
                      a.push_back(0);
                      break;
                 }

             

         }
         

     }
     return a;
                                           
}