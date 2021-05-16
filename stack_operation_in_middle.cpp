#include<iostream>
using namespace std;

class dll{
    public:
        int data;
        dll *next,*pre;

};

class stack{
    public:
    dll *head;
    dll *mid;
    int count;
};

stack *c_stack(){
    stack *sta=new stack();
    sta->count=0;
    return sta;
}

void push(stack *sta,int data){
    dll *node=new dll();
    node->data=data;

    node->pre=NULL;
    node->next=sta->head;
    sta->count++;

    if(sta->count==1){
        sta->mid=node;
    }
    else{
        sta->head->pre=node;
        if(!(sta->count & 1)){
            sta->mid=sta->mid->pre;

        }

    }
    sta->head=node;
}


int pop(stack *sta){
    if(sta->count==0){
        exit(1);
    }
    dll *head=sta->head;
    int item=head->data;
    sta->head=head->next;
    if(sta->head!=NULL){
        sta->head->pre=NULL;

    }
    sta->count--;

    if(sta->count & 1){
        sta->mid=sta->mid->next;
    }
    delete head;
    return item;
}

int find_mid(stack *sta){
    if(sta->count==0){
        exit(1);
    }
    return sta->mid->data;
}

int main(){

    stack *sta;
    sta=c_stack();
    char c;
    int data;
    cin>>c;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            cin>>data;
            push(sta,data);
        }
        if(c=='p'){
            cout<<pop(sta)<<endl;
        }
        if(c=='m'){
            cout<<find_mid(sta)<<endl;
        }
        cin>>c;
    }
    
    return 0;


}