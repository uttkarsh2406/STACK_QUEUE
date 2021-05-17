#include<iostream>
#include<stack>

using namespace std;

class queue{
    public:
    stack<int> a,b;


void enqueue(int x){
    while (!a.empty())
    {
        /* code */
        b.push(a.top());
        a.pop();
    }
    a.push(x);

    while (!b.empty())
    {
        /* code */
        a.push(b.top());
        b.pop();

    }
    
    
}

int dequeue(){
    if(!a.empty()){
        int x=a.top();
        a.pop();
        return x;
    }
    else {
        exit(0);
    }
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