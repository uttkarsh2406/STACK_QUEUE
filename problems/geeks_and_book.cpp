#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        stack<long long>a;
        int n;
        long long data;
        cin>>n;
        while (n--)
        {
            /* code */
            string s;
            cin>>s;
            if(s.compare("place")==0){
                cin>>data;
                a.push(data);
            }
            if(s.compare("remove")==0){
                if(a.empty()){
                    cout<<-1<<" ";
                }
                else{
                cout<<a.top()<<" ";
                a.pop();
                }
            }

        }
        cout<<endl;
    }
    return 0;
    
}