#include <stdio.h>
#include<stack>
#include<cstring>
#include<iostream>
using namespace std;

int main() {
	//code
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int a[n];
        int ans[n];
        memset(ans,-1,sizeof ans);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        stack<int>sta;
        sta.push(0);
        for (int i = 1; i < n; i++)
        {
            /* code */
            if(sta.empty()){
                sta.push(i);
            }
            else{
                while (!sta.empty() && a[sta.top()] >a[i])
                {
                    /* code */
                    ans[sta.top()]=i+1;
                    sta.pop();

                }
                sta.push(i);
                


            }


        }
        while (!sta.empty())
        {
            /* code */
            ans[sta.top()]=-1;
            sta.pop();
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
        
        
        
    }
    

	return 0;
}