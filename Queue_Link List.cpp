#include"iostream"
using namespace std;

    // Create Struct of name Node

struct Node{
    int data;
    Node* next;
};

    // Create class of Queue

class Queue{

    Node* front;
    Node* rare;

    public:

    // Create Constructor of Queue Class

    Queue(){
        front=NULL;
        rare=NULL;
    }

    // Function to enqueue data in Queue

    void enqueue(int val){
        Node* n=new Node();
        n->data=val;
        n->next=NULL;
        if(front==NULL){
            front=n;
            rare=n;
        }
        rare->next=n;
        rare=n;

    }

    // Function to dequeue values in Queue


    void dequeue()
    {
        Node* temp=front;
        front=front->next;
        delete(temp);

        }


    // Function to return Peek value in Queue

        int Peek(){
            Node* x=front;
            return x->data;
        }

    // Function to check Weather the Queue is Empty


        bool is_empty(){
            if(front==NULL)
            {
                return true;
        }
        else{
            return false;
        }
        }


    // Function to Print Values of Queue

    void print(){
        Node* x=front;
        while(x!=NULL)
        {
            cout<<x->data<<endl;
            x=x->next;
    }

}


};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.print();
    
}
/*
                                             Arbab Hassan 
                                 Department of Information Technology
                                         University of Gujrat
                                        21011556-184@uog.edu.pk


                                        */