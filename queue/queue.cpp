#include<iostream>
using namespace std;

class queue{
    public:
    int front;
    int rear;
    int size;
    unsigned capacity;
    int *arr;
};

queue *c_queue(unsigned size){
    queue *que=new queue();
    que->capacity=size;
    que->front=0;
    que->size=0;
     
    que->rear=size-1;
    que->arr=new int[que->capacity];
    return que;
    
}

int is_ful(queue *que){
    if(que->size==que->capacity){
        return 1;
    }
    else{
        return 0;
    }
}

int is_empt(queue *que){
    if(que->size==0){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(queue *que,int data){
    if(is_ful(que)){
        return;
    }
    else{
        que->rear=(que->rear+1)%que->capacity;
        que->arr[que->rear]=data;
        que->size=que->size+1;

    }
}

int dequeue(queue *que){
    if(is_empt(que)){
     exit(1);
    }
    else{
        int item=que->arr[que->front];
        que->front=(que->front+1)%que->capacity;
        que->size--;
        return item;
    }
}

int front(queue *que){
    if(is_empt(que)){
        exit(1);
    }
    else{
        int x=que->arr[que->front];
        return x;
    }
}

int rear(queue *que){
    if(is_ful(que)){
      exit(0);

    }
    else{
        int x=que->arr[que->rear];
        return x;
    }

}

int main(){
    int n;
    cin>>n;
    queue *que=c_queue(n);
    char c;
    int data;
    cin>>c;
    while(c!='e'){
      if(c=='i'){
        cin>>data;
        enqueue(que,data);
      }  
      if(c=='d'){
          cout<<dequeue(que)<<endl;
      }
      if(c=='f'){
          cout<<front(que)<<endl;
      }
      if(c=='r'){
          cout<<rear(que)<<endl;
      }
      cin>>c;
    }
    return 0;
}