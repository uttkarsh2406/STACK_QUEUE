// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool comp(char a,char b){
        if(a=='{' && b=='}'){
            return true;
        }
        if(a=='(' && b==')'){
            return true;
        }
        if(a=='[' && b==']'){
            return true;
        }
        return false;
    }
    bool ispar(string x)
    {
        // Your code here

        stack<char> a;
        for (int i = 0; i < x.length(); i++)
        {
            /* code */
            if(x[i]=='(' || x[i]=='{' || x[i]=='['){
                a.push(x[i]);
            }
            else{
                if(a.empty()|| !comp(a.top(),x[i])){
                    return false;
                }
                else
                   a.pop();


                
            }
        }
        if(a.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends