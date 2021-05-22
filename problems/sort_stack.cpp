// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
  int size=s.size();
  int a[size];
  for (int i = 0; i < size; i++)
  {
      /* code */
      a[i]=s.top();
      s.pop();
  }
   for (int i = 0; i < size-1; i++)
   {
       /* code */
       for (int j = 0; j<size-i-1; j++)
       {
           /* code */
           if(a[j]>a[j+1]){
               swap(a[j],a[j+1]);
           }
       }
       
   }
   for (int i = 0; i < size; i++)
   {
       /* code */
       s.push(a[i]);

   }
   
   
  
}