#include<iostream>
#include<stdlib.h>

using namespace std;

class t_stack{
    int *arr;
    int size;
    int top1,top2;

    public:
        t_stack(int n){
            size=n;
            arr=new int[size];
            top1=-1;
            top2=size;
        }

        void push1(int x){
            if(top1<top2-1){
                top1++;
                arr[top1]=x;

            }
            else{
                exit(1);
            }

        }
        void push2(int x){
            if(top1<top2-1){
                top2--;
                arr[top2]=x;
            }
            else{
                exit(1);
            }

        }

        int pop1(){
            if(top1>=0){
                int x=arr[top1];
                top1--;
                return x;
            }
            else{
                exit(1);
            }

        }

        int pop2(){
            if(top2<size){
                int x=arr[top2];
                top2++;
                return x;
            }
            else{
                exit(1);
            }
        }
};


int main(){
    int n;
    cin>>n;
    t_stack sta(n);
    char c;
    cin>>c;
    int data;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            cin>>data;
            sta.push1(data);
        }
        if(c=='o'){
            cin>>data;
            sta.push2(data);
        }
        if(c=='p'){
            cout<<sta.pop1()<<endl;
        }
        if(c=='q'){
            cout<<sta.pop2()<<endl;
        }
        cin>>c;
    }
    return 0;
    
}

