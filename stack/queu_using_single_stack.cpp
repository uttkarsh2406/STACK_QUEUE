#include<iostream>
#include<stack>

using namespace std;

class queue{
    public:
    stack<int> a;


void enqueue(int x){
    a.push(x);
    
}

int dequeue(){
    if(a.empty()){
        exit(0);
    }
    int x=a.top();
    a.pop();

    if(a.empty()){
        return x;
    }
    int t=dequeue();

    a.push(x);

    return t;


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
