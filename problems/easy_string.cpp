// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}

// } Driver Code Ends


string transform(string S){
    //complete the function here
    string ans;
    transform(S.begin(),S.end(),S.begin(),::tolower);
    int c=1;
    for (int i = 1; i < S.length(); i++)
    {
        /* code */
        if(S[i]==S[i-1]){
            c++;
            continue;
        }
        else{
            ans+=to_string(c);
            ans+=S[i-1];
            c=1;
        }
        
    }
    ans+=to_string(c);
    ans+=S[S.length()-1];
    return ans;
    
}

