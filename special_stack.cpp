#include<iostream>
#include<stdlib.h>
using namespace std;

class stack{
    private:
    static const int max=100;
    int arr[max];
    int top;

    public:
    stack(){
        top=-1;
    }
    bool is_emp();
    bool is_full();
    int pop();
    void push(int x);
};

class s_stack :public stack{
    stack min;

    public:
    int pop();
    void push(int x);
    int get_min();

};


bool stack::is_emp(){
    if(top<=-1){
        return true;
    }
    else {
        return false;
    }
}

bool stack::is_full(){
    if(top==max-1){
        return true;
    }
    else {
        return false;
    }
}

int stack::pop(){
    if(is_emp()){
        abort();
    }
    int x=arr[top--];
    return x;

}

void stack::push(int x){
    if(is_full()){
        abort();
    }
    arr[++top]=x;
}


void s_stack::push(int x){
    if(is_emp()==true){
        stack::push(x);
        min.push(x);
    }
    else {
        stack::push(x);
            int y=min.pop();
            min.push(y);
            if(x<y){
                min.push(x);
            }
            else {
                min.push(y);
            }
        
    }

}

int s_stack::pop(){
    int x=stack::pop();
    min.pop();
    return x;
}


int s_stack::get_min(){
    int x=min.pop();
    min.push(x);
    return x;
}

int main(){
    s_stack a;
    char c;
    cin>>c;
    int data;
    while (c!='e'){
        if(c=='i'){
            cin>>data;
            a.push(data);
        }
        if(c=='p'){
            cout<<a.pop()<<endl;
        }
        if(c=='m'){
            cout<<a.get_min()<<endl;
        }
        cin>>c;
    }
    return 0;

    
}