// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        while (!input.empty())
        {
            /* code */
            output.push(input.top());
            input.pop();
        }
         input.push(x);
         while (!output.empty())
         {
             /* code */
             input.push(output.top());
             output.pop();
         }
         
        
    }

    int dequeue() {
        if(!input.empty()){
            int x=input.top();
            input.pop();
            return x;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}
  // } Driver Code Ends