#include"iostream"
using namespace std;

// create a struct of Node

struct Node{
    int data;
    Node* next;
    Node* previous;
};

    // create a class of Dobuly_Stack

class Dobuly_Stack{
    Node* top;
    Node* start;

    public:

    // Create a Constructor of class Dobuly_Stack

    Dobuly_Stack(){
        top=NULL;
        start=NULL;

    }

    // Function to push values in Stack

    void push(int val){
        Node* n=new Node();
        n->data=val;
        n->next=NULL;
        if(start==NULL)
        {
            start=n;
            top=n;
            n->previous=NULL;
    }
    else{
        top->next=n;
        n->previous=top;
        top=n;
    }

}


    // Function to Print values of Stack

        void print(){

            Node* ptr=start;
            while(ptr!=NULL){
                cout<<ptr->data;
                cout<<endl;
                ptr=ptr->next;
            }

        }


    // Function to pop values of Stack

    void pop(){


        Node* ptr=start;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        Node* temp=ptr->next;
        ptr->next=NULL;
        top=ptr;
        delete(temp);
    }


    // Function to return top element of the stack

    int top_value(){
            cout<<top->data;
    }

    // Function to check weather the stack is empty

    bool is_empty(){
        if(start==NULL){
            return true;
        }
        else{
            return false;
        }
    }



};
int main(){
    Dobuly_Stack a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.pop();
    a.print();

    cout<<endl;
   a.top_value();
}
/*
                                             Arbab Hassan 
                                 Department of Information Technology
                                         University of Gujrat
                                        21011556-184@uog.edu.pk


                                        */