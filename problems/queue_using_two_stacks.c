// { Driver Code Starts
//Initial Template for C
#include <stdio.h>
#include <stdlib.h>

/* structure of a stack node */
struct sNode {
	int data;
	struct sNode* next;
};


 // } Driver Code Ends
//User function Template for C

/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data)
{
     struct sNode *dta=(struct sNode *)malloc(sizeof(struct sNode));
     dta->data=new_data;
     dta->next=NULL;

     dta->next=*top_ref;
     *top_ref=dta;
    
}

/* Function to pop an item from stack*/
int pop(struct sNode** top_ref)
{
    int x=(*top_ref)->data;
    struct sNode *temp=*top_ref;
    *top_ref=(*top_ref)->next;
    free(temp);
    return x;

    
}

// { Driver Code Starts.

/* structure of queue having two stacks */
struct queue {
	struct sNode* stack1;
	struct sNode* stack2;
};

/* Function to enqueue an item to queue */
void enQueue(struct queue* q, int x)
{
	push(&q->stack1, x);
}

/* Function to deQueue an item from queue */
int deQueue(struct queue* q)
{
	int x;

	/* If both stacks are empty then error */
	if (q->stack1 == NULL && q->stack2 == NULL) {
		return -1;
	}

	/* Move elements from stack1 to stack 2 only if
	stack2 is empty */
	if (q->stack2 == NULL) {
		while (q->stack1 != NULL) {
			x = pop(&q->stack1);
			push(&q->stack2, x);
		}
	}

	x = pop(&q->stack2);
	return x;
}


/* Driver function to test anove functions */
int main()
{ 
    int T;
    scanf("%d",&T);
    while(T--){
	struct queue* q = (struct queue*)malloc(sizeof(struct queue));
	q->stack1 = NULL;
	q->stack2 = NULL;
	int Q;
    scanf("%d",&Q);
    while(Q--){
    int QueryType=0;
    scanf("%d",&QueryType);
    if(QueryType==1)
    {
        int a;
        scanf("%d",&a);
        enQueue(q, a);
    }else if(QueryType==2){
        printf("%d ",deQueue(q));
        
        }
    }
	printf("\n");
}
return 0;
}
  // } Driver Code Ends