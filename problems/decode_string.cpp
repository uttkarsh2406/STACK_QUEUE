// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    inline bool is_a(char c){
        return c>='0' && c<='9';
    }
    inline int get_pos(int a){
        int c=0;
        while (a>0)
        {
            /* code */
            a=a/10;
            ++c;
        }
        return c;
    }

    int decode(int i,const string s,string &final){
        while (i<s.length())
        {
            /* code */
            if(s[i]=='['){
                ++i;
            }
            else if(is_a(s[i])){
                int q=atoi(&s[i]);
                int pos=get_pos(q);
                int i_nex=0;
                while (q--)
                {
                    /* code */
                    i_nex=decode(i+pos,s,final);

                }
                i=i_nex;
                
            }
            else{
                final+=s[i];
                ++i;


            }
            if(i<s.length() && s[i]==']'){
                return i+1;
            }
           
        }
         return s.length();
        
    }
    string decodedString(string s){
        // code here
        string ans="";
        int t=0;
        while (t<s.size())
        {
            /* code */
            t=decode(t,s,ans);
        }
        return ans;
        
    }  // } Driver Code Ends
};
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends