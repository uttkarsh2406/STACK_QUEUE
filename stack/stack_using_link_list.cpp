#include<iostream>
using namespace std;


class stack
{
    public:
    int data;
    stack *next;

};

stack *n_node(int x){
    stack *n=new stack();
    n->data=x;
    n->next=NULL;
    return n;
}

int is_empt(stack *root){
    return !root;
}
void push(stack **root, int x){
    stack *node=n_node(x);
    node->next=*root;
    *root=node;
}
int pop(stack **root){
    if(!is_empt(*root)){
        stack *temp=*root;
        *root=(*root)->next;
        int p=temp->data;
        free(temp);
        return p;

    }
    else {
        return -1;
    }
}

int peek(stack *root){
    if(!is_empt(root)){
        return root->data;
    }
    else {
        return -1;
    }
}

int main(){
     stack *root=NULL;

     char c;
     int data;
     cin>>c;
     while (c!='e')
     {
         /* code */
         if(c=='i'){
             cin>>data;
             push(&root,data);
         }
         if(c=='p'){
             int x=pop(&root);
             if(x==-1){
               continue;
             }
            else {
                 cout<<x<<endl;
            }
         }
         if(c=='l'){
             int x=peek(root);
             if(x==-1){
                continue;
             }
             else {
                 cout<<x<<endl;
             }
         }
         cin>>c;
     }
        
}