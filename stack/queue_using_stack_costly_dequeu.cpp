#include<iostream>
#include<stack>

using namespace std;

class queue{
    public:
    stack<int> a,b;


void enqueue(int x){
    a.push(x);
    
}

int dequeue(){
    if(a.empty() && b.empty()){
        exit(0);
    }
     if(b.empty()){
         while (!a.empty())
         {
             /* code */
             b.push(a.top());
             a.pop();
         }
         
     }
     int x=b.top();
     b.pop();
     return x;
}


};
int main(){
    queue q;
    char c;
    int data;
    cin>>c;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            cin>>data;
            q.enqueue(data);
        }
        if(c=='p'){
            cout<<q.dequeue()<<endl;
        }
        cin>>c;
    }
    return 0;
    

}