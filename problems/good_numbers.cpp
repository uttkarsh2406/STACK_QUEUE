#include<iostream>
#include<vector>
#include<queue>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<"\n";
        }
        else if(n==2){
            cout<<2<<'\n';
        }
        else{
            vector<string>a;
            a.push_back("1");
            a.push_back("2");
            queue<string>q;
            q.push("1");
            q.push("2");

            n-=2;

            while (n)
            {
                /* code */
                string bu=q.front();
                q.pop();
                string x=bu+'1';
                a.push_back(x);
                q.push(x);
                n--;

                if(n!=0){
                    string x=bu+'2';
                    a.push_back(x);
                    q.push(x);
                    n--;
                }
            }
            cout<<a.back()<<"\n";

            

            
        }
    
    } 
    return 0;

}