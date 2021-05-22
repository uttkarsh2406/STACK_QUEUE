#include<iostream>
using namespace std;

class queue{
    public:
    int rear,front;
    int size;
    int *arr;
    queue(int s){
        front=rear=-1;
        size=s;
        arr=new int [s];
    }
    void enqueu(int data);
    int dequeue();
    void display();
};

void queue::enqueu(int data){
    if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
        return;
    }
    else if(front==-1){
        front=rear=0;
        arr[rear]=data;

    }
    else if (rear==size-1 && front!=0)
    {
        /* code */
        rear=0;
        arr[rear]=data;
    }
    else{
        rear++;
        arr[rear]=data;
    }
    
}

int queue::dequeue(){
    if(front==-1){
       return 0;
    }
    int data=arr[front];
    arr[front]=-1;
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
    return data;
}

void queue::display(){
    if(front==-1){
        return ;
    }
    if(rear>=front){
        for (int i = front; i <=rear; i++)
        {
            /* code */
            cout<<arr[i]<<" ";
        }
        
    }
    else{
        for (int i = front; i < size; i++)
        {
            /* code */
            cout<<arr[i]<<" ";

        }
        for (int i = 0; i <= rear; i++)
        {
            /* code */
            cout<<arr[i]<<" ";
        }

        
        
    }
}





int main(){
    int n;
    cin>>n;
    queue que(n);
    int data;
    char c;
    cin>>c;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            cin>>data;
            que.enqueu(data);
        }
        if(c=='d'){
            cout<<que.dequeue()<<endl;

        }
        if(c=='p'){
            que.display();
            cout<<endl;
        }
        cin>>c;
    }
    return 0;
}