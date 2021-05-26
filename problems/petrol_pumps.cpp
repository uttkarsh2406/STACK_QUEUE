// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int a=0;
       int b=1;
       int petrol=p[a].petrol-p[a].distance;

       while (a!=b || petrol<0)
       {
           /* code */
           while (petrol<0 && a!=b)
           {
               /* code */
               petrol-=p[a].petrol-p[a].distance;
               a=(a+1)%n;

               if(a==0){
                   return -1;
               }

           }
           petrol+=p[b].petrol-p[b].distance;
           b=(b+1)%n;
       }
       
       return a;
       
       
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends