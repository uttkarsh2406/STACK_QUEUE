#include<iostream>
#include<stdlib.h>
using namespace std;


class stack{
    int *arr;
    int *top;
    int *next;
    int n;
    int k;
    int free;

    
    public:
        stack(int k,int n);
        bool is_full(){
            return (free==-1);
        }
        void push(int data,int sn);

        int pop(int sn);

        bool is_empt(int sn){
            return (top[sn]==-1);
        }

};

stack::stack(int k1,int n1){
    k=k1;
    n=n1;
    arr=new int[n];
    top=new int [k];
    next=new int[n];
    for (int i = 0; i < k; i++)
    {
        /* code */
        top[i]=-1;
    }
    free=0;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        next[i]=i+1;
    }
     next[n-1]=-1;
    
    
}

void stack::push(int data,int sn){
    if(is_full()){
        return;
    }
    int i=free;
    free=next[i];
    next[i]=top[sn];
    top[sn]=i;
    arr[i]=data;

}

int stack::pop(int sn){
    if(is_empt(sn)){
        exit(1);
    }
    int i=top[sn];
    top[sn]=next[i];
    next[i]=free;
    free=i;
    return arr[i];
}


int main(){

    int k,n;
    cin>>k>>n;
    stack sta(k,n);
    char c;
    int data,stack_no;
    cin>>c;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            cin>>data>>stack_no;
            sta.push(data,stack_no);

        }
        if(c=='p'){
            cin>>stack_no;
            cout<<sta.pop(stack_no)<<endl;
        }
        cin>>c;
    }
    
    return 0;

}