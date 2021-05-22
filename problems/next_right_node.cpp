// { Driver Code Starts
/* Program to find next right of a given key */
#include <iostream>
#include <queue>
using namespace std;

// A Binary Tree Node
struct node
{
	int key;
	struct node *left;
	struct node *right;
	
	node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};


// Method to find next right of given key k, it returns NULL if k is
// not present in tree or k is the rightmost node of its level
node* nextRight(node *root, int k);

// A utility function to test above functions
void test(node *root, int k)
{
	node *nr = nextRight(root, k);
	if (nr != NULL)
	cout << nr->key << endl;
	else
	cout << "-1"<<endl;
}
void insert(struct node *root,int n1,int n2,char lr)
 {
     if(root==NULL)
        return;
     if(root->key==n1)
     {
         switch(lr)
         {
          case 'L': root->left=new node(n2);
                    break;
          case 'R': root->right=new node(n2);
                    break;
         }
     }
     else
     {
         insert(root->left,n1,n2,lr);
         insert(root->right,n1,n2,lr);
     }
 }
 int main()
{
    /* Let us construct the tree shown in above diagram */
    int t,k;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    struct node *root=NULL;
    while(n--)
    {
        char lr;
        int n1,n2;
        cin>>n1>>n2;
        cin>>lr;
        if(root==NULL)
        {
            root=new node(n1);
            switch(lr){
                    case 'L': root->left=new node(n2);
                    break;
                    case 'R': root->right=new node(n2);
                    break;
                    }
        }
        else
        {
            insert(root,n1,n2,lr);
        }
    }
    cin>>k;
    test(root,k);
    }
    return 0;
}
// } Driver Code Ends


// Method to find next right of given key k, it returns NULL if k is
// not present in tree or k is the rightmost node of its level







node* nextRight(node *root, int k)
{

// Your code goes here
    if(root==NULL){
        return 0;
    }
    queue<node *>a;
    queue<int>b;

    int level=0;
    a.push(root);
    b.push(level);
    while (a.size())
    {
        /* code */
        node *no=a.front();
        level=b.front();
        a.pop();
        b.pop();
        if(no->key==k){
            if(b.size()==0 || b.front()!=level){
                return NULL;
            }
            return a.front();
        }
        if(no->left!=NULL){
            a.push(no->left);
            b.push(level+1);
        }
        if(no->right!=NULL){
            a.push(no->right);
            b.push(level+1);
        }



    }
    
  return NULL;


}