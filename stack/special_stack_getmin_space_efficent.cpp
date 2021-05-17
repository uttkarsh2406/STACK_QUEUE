#include<iostream>
#include<stack>
using namespace std;


class min_stack{
    public:
        stack<int> s;
        int min;

        void get_min(){
            if(s.empty()){
                cout<<"Stack Empty"<<endl;
            }
            else{
                cout<<min<<endl;
            }

        }

        void peak(){
            if(s.empty()){
                return;
            }
            else{
                int data=s.top();
                (data<min)?cout<<min:cout<<data;
            }
        }

        void push(int data){
            if(s.empty()){
                min=data;
                s.push(data);
                return;
            }
            else if(data<min){
                s.push((2*data)-min);
                min=data;

            }
            else{
                s.push(data);
            }

        }

        void pop(){
            if(s.empty()){
                return;
            }
            int data=s.top();
            s.pop();
            if(data<min){
                cout<<min<<endl;
                min=2*min-data;

            }
            else{
                cout<<data<<endl;
            }

        }
      
};


int main(){
    min_stack s;
    char c;
    int data;
    cin>>c;
    while (c!='e')
    {
        /* code */
        if(c=='i'){
            cin>>data;
            s.push(data);
        }
        if(c=='l'){
            s.peak();
        }
        if(c=='m'){
            s.get_min();
        }
        if(c=='p'){
            s.pop();
        }
        cin>>c;
    }
    
}