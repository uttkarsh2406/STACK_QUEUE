// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>a;
   for (int i = 0; i < n; i++)
   {
       /* code */
        a.push(arr[i]);
   }
   return a;
   
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    std::vector<int>a;
    while (!s.empty())
    {
        /* code */
        a.push_back(s.top());
        s.pop();
        
    }
    stack<int>min;
    s.push(a.back());
    min.push(a.back());

    for (int i = a.size()-2; i >=0; i--)
    {
        /* code */
        s.push(a[i]);
        if(s.top()<min.top()){
            min.push(s.top());
        }
        else{
            min.push(min.top());
        }

    }
    while (!s.empty())
    {
        /* code */
        cout<<min.top()<<" ";
        s.pop();
        min.pop();
    }
    cout<<endl;
    
    
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends