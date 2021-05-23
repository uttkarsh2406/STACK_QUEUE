#include<iostream>
#include<queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        queue<int>a;
        int n;
        int count=0;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            
            a.push(i);
        }
        int i=0;
        while(a.size()!=1){
            if(count%2==0){
               int x=a.front();
               a.pop();
               a.push(x);

            }
            if(count%2==0){
                a.pop();
            }

        }

        cout<<a.front()<<endl;
        a.pop();

    }
    
}
