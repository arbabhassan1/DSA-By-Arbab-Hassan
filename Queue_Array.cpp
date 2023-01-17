#include"iostream"
using namespace std;

    // Create class of Queue

class Queue{
    int front;
    int rare;
    int arr[100];
    public:

    // Create constructor of class Queue

    Queue(){
        front=-1;
        rare=-1;

    }

    // Function to enqueue values in Queue

    void enqueue(int val){
        if(front==-1){
            front++;
           
        }
          rare++;
        
        arr[rare]=val;


    }

        // Function to Print values in Queue


    void print(){
    for(int i=front;i<=rare;i++){
        cout<<arr[i]<<endl;
    }
    }

            // Function to dequeue values in Queue



    void dequeue(){
        front++;
    }

        // Function to return Peek value in Queue

    int peek(){
        return arr[front];
    }


    // Function to check weather the Queue is empty

    bool is_empty(){
        if(front ==-1){
            return true;
        }
        else{
            return false;
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