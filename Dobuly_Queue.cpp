#include"iostream"
using namespace std;

    // Create a Struct of Node

struct Node{
    int data;
    Node* next;
    Node* previous;
};


    // Create class of Queue

class Queue{
    Node* front;
    Node* rare;

    public:

    // constructor of class

Queue(){
    front=NULL;
    rare=NULL;

}

    // Function to enqueue values in queue


    void enqueue(int val){
        Node* n=new Node();
        n->data=val;
        n->next=NULL;
        if(front==NULL){
            front=n;
            rare=n;
            n->previous=NULL;
        }
        rare->next=n;
        
        n->previous=rare;
        rare=n;
    }

    // Function to dequeue values in queue

        void dequeue(){
            Node* ptr=front;
            front=front->next;
            delete(ptr);
        }

        // Function to Print values of queue

        void print_Queue(){
            Node* ptr=front;
            while(ptr!=NULL){
                cout<<ptr->data<<endl;
                ptr=ptr->next;
            }
        }

        // Function to return peek value in queue

        int peek(){
            return front->data;
        }

        // Function to check weather the queue is empty



        bool is_empty(){
            if(front==NULL){
                return true;
            }
            else{
                return false;
            }
        }

};
int main(){

    Queue a;
    a.enqueue(10);
    a.enqueue(20);
    a.enqueue(30);
    a.enqueue(40);
    a.enqueue(50);
    a.dequeue();
    a.print_Queue();
}
/*
                                             Arbab Hassan 
                                 Department of Information Technology
                                         University of Gujrat
                                        21011556-184@uog.edu.pk


                                        */