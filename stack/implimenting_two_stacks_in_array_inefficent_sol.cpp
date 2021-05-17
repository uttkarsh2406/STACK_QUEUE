#include<iostream>
#include<stdlib.h>

using namespace std;

class stack{
    int *a;
    int size;
    int top1,top2;
    
    public:
        stack(int n){
            size=n;
            a=new int[n];
            top1=n/2+1;
            top2=n/2;

        }
        void push1(int x){
            if(top1>0){
                top1--;
                a[top1]=x;

            }
            else{
                return;
            }
        }
        void push2(int x){
            if(top2<size-1){
                top2++;
                a[top2]=x;
            }
            else{
                return;
            }
        }

        int pop1(){
            if(top1<=size/2){
                int x=a[top1];
                top1++;
                return x;
            }
            else{
                exit(1);
            }

        }

        int pop2(){
            if(top2>=size/2 + 1 ){
                int x=a[top2];
                top2--;
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
    stack sta(n);
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

