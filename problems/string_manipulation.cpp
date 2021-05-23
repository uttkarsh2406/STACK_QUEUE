// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Soltion{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        // Your code goes 
        stack<string>sta;
        for (int i = 0; i < v.size(); i++)
        {
            /* code */
            if(sta.empty()){
                sta.push(v[i]);
            }
            else{
                string tmep=sta.top();
                if(tmep.compare(v[i])==0){
                    sta.pop();

                }
                else{
                    sta.push(v[i]);
                }
            }
        }
        return sta.size();
        
        
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
         string s;
         vector<string> v;
         for(int i=0;i<n;i++)
         {
             cin>>s;
             v.push_back(s);
         }
         Soltion ob;
         cout<< ob.removeConsecutiveSame(v) <<endl;
     }
	
	
	
	
	return 0;
}  // } Driver Code Ends