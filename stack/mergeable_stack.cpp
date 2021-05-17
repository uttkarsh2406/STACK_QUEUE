#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

class stack{
    public:
    node *head;
    node *tail;
    stack(){
        head=NULL;
        tail=NULL;
    }
};

stack *c_stack(){
    stack *sta=new stack();
    return sta;

}

void push(int data,stack *sta){
    node *temp=new node();
    temp->data=data;
    temp->next=sta->head;

    if(sta->head==NULL){
        sta->tail=temp;
    }
    sta->head=temp;

}

int pop(stack *sta){
    if(sta->head==NULL){
        exit(1);
    }
    else{
        node *temp=sta->head;
        sta->head=sta->head->next;
        int data=temp->data;
        delete temp;
        return data;
    }
}

void merge(stack *s1,stack *s2){
    if(s1->head==NULL){
        s1->head=s2->head;
        s1->tail=s2->tail;
        return;
    }
    s1->tail->next=s2->head;
    s1->tail=s2->tail;

}

void display(stack *sta){
    node *temp=sta->head;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    
}

int main(){
    stack *s1=c_stack();
    stack *s2=c_stack();
    char c;
    int data;
    cin>>c;
    while (c!='e'){
       if(c=='i'){
           cin>>data;
           push(data,s1);
       }
       if(c=='o'){
           cin>>data;
           push(data,s2);
       }
       if(c=='m'){
           merge(s1,s2);
       }
       if(c=='p'){
           cout<<pop(s1)<<endl;
       }
       if(c=='q'){
           cout<<pop(s2)<<endl;
       }
       if(c=='d'){
           display(s1);
       }
       cin>>c;
    }
    return 0;
    
}