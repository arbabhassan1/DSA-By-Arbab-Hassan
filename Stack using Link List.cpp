#include"iostream"
using namespace std;

    // Create a struct of NOde
struct Node{
    int data;
    Node* link;
};

// create class of Stack

 class Stack{
    Node * top;
    public:
    Stack(){
        top=NULL;
    }

    // Function to push Value in Stack

    void push(int val){
        Node* n=new Node();
        n->data=val;
        n->link=top;
        top=n;
    }

    // Function to pop Value in Stack

    void pop(){
        Node* temp=top;
        top=top->link;
        delete(temp);
    }

// Function to check weather Stack is empty

    bool is_empty(){
        if(top==NULL){
            return true;
        }
        else{
            return false;
        }

    }

    // Function to print Stack values

    void print(){
        Node* ptr=top;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
    }

    // Function that return top value in stack

    int top_val(){
        Node* x=top;
        return x->data;
    }

 };
 int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.print();
 }
 /*
                                              Arbab Hassan 
                                  Department of Information Technology
                                          University of Gujrat
                                         21011556-184@uog.edu.pk
 
 
                                         */