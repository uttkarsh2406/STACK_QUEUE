#include<iostream>
#include<stack>
#include<string.h>
using namespace std;


bool check(string a){
     stack<char>sta;
        for (int i = 0; i < a.size(); i++)
        {
            /* code */
            if(a[i]=='0'){
                sta.push(a[i]);
            }
            else if(sta.empty()){
                
                return false;
            }
            else{
                sta.pop();
            }
        }
        if(sta.empty()){
            return true;
        }
        
        return false;

}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        string a;
        cin>>a;

        if(check(a)==true){
           cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        
    }
    return 0;

    
}