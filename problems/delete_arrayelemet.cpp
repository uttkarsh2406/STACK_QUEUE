// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}
// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
    stack<int>a;
    int count=0;
    a.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        /* code */
        while (!a.empty() && a.top()<arr[i] && count<k)
        {
            /* code */
            a.pop();
            count++;
        }
        a.push(arr[i]);
        
    }
    int m=a.size();
    vector<int>v(m);
    while (!a.empty())
    {
        /* code */
        v[--m]=a.top();
        a.pop();
    }
    return v; 
    
    
}
