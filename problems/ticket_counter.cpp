#include<iostream>
#include<queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,k;
        cin>>n>>k;
        deque<int>a;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            a.push_back(i);
        }
        
        while (a.size()!=1)
        {
            /* code */
            int i=k;
            int j=k;
            while (a.size()!=1  &&  i--)
            {
                /* code */
                a.pop_front();
            }
            while (a.size()!=1  &&  j--){
                a.pop_back();
            }
        }
        
        cout<<a.front()<<endl;
        
        

    }
    
}