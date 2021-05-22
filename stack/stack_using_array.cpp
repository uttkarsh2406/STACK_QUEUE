#include<iostream>
using namespace std;

#define m 1000

class stack{
    int top;

    public:
    int arr[m];
    stack(){
        top=-1;
    }
    void push(int x);
    bool is_emp();
    int pop();
    int peek();
    
};

bool stack::is_emp(){
    if(top<0){
        return true;
    }
    else 
    return false;
}

void stack::push(int x){
    if(top>=(m-1)){
        return;
    }
    else{
        arr[++top]=x;
        return;
    }

}

int stack::pop(){
    
    if(!(is_emp())){
       int x=arr[top--];
       return x;    
    }
    else{
        return 0;
    }

}

int stack::peek(){
    if(!(is_emp())){
        int x=arr[top];
        return x;
    }
    else{
        return 0;
    }
}

int main(){
    stack s;
    char c;
    cin>>c;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            int data;
            cin>>data;
            s.push(data);
        }
        if(c=='p'){
            int x=s.pop();
            if(x==0){
                
            }
            else{
            cout<<x<<endl;
            }
        }
        if(c=='l'){
            int x=s.peek();
            if(x==0){
                
            }
            else{
            cout<<x<<endl;
            }           
 
        }
        cin>>c;
    }
    return 0;
}