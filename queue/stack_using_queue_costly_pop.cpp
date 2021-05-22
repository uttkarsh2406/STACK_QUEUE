#include<iostream>
#include<queue>

using namespace std;

class stack{
    queue<int>a,b;

    int size;

    public:
      stack(){
          size=0;
      }
      void push(int x){
          size++;
          a.push(x);
          
      }
      int pop(){
         if(a.empty()){
             return -1;
         }   
         while (a.size()!=1)
         {
             /* code */
             b.push(a.front());
             a.pop();

         }
         int x=a.front();
         a.pop();
         size--;
         queue<int>c=a;
         a=b;
         b=c;

         return x;
      }
      int top(){
          if(a.empty()){
              return -1;
          }
          while (a.size()!=1)
          {
              /* code */
              b.push(a.front());
              a.pop();
          }
          int t=a.front();
          a.pop();
          b.push(t);
          queue<int> c;
          c=a;
          a=b;
          b=c;
          return t;
          
      }
      int sizeo(){
          return size;
      }
      

};

int main(){
    stack sta;
    char c;
    int data;
    cin>>c;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            cin>>data;
            sta.push(data);
        }
        if(c=='p'){
            cout<<sta.pop()<<endl;
        }
        if(c=='f'){
            cout<<sta.top()<<endl;
        }
        if(c=='s'){
            cout<<sta.sizeo()<<endl;
        }
        cin>>c;
    }
    
}