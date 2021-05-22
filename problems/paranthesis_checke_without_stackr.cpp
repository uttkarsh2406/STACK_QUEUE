// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   
        // Your code here
        
        int b=0,c=0,d=0;
        for (int i = 0; i < x.length(); i++)
        {
            /* code */
            if(x[i]=='(' || x[i]=='{'  || x[i]=='['){
                
                if(x[i]=='(')
                b++;
                if(x[i]=='{')
                c++;
                if(x[i]=='[')
                d++;


            }
            else{
                if(x[i]==')' || x[i]=='}' || x[i]==']'){
                if(x[i]==')')
                b--;
                if(x[i]=='}')
                c--;
                if(x[i]==']')
                d--;             
                }
            } 
        }
        if(b==0 && c==0 && d==0){
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