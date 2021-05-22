// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        cout<<ch;
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char>a;
    int i=0,s=len;
    while (len--)
    {
        /* code */
        a.push(S[i]);
        i++;
    }
    i=0;
    while (s--)
    {
        /* code */
        S[i]=a.top();
        a.pop();
        i++;
    }

    return S;
    

    
    
}