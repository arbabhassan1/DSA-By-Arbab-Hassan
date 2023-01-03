#include"iostream"
using namespace std;

// create a class of Stack

class Stack{

// Define array of 100 index and top variable
  
    int top;
    int arr[100];
    public:

    // create constructor 
   
    Stack(){
        top=-1;

    }

    // Function to Push Values in Stack
   
    void push(int val){
        top++;
        arr[top]=val;
    }
    // Function to Remove Values form Stack
  
    void pop(){
        top--;
    }
    // Function to print stack
  
    void print_Stack(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
    // Function to check weather the stack is empty
 
    bool is_empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
    }
    }

    // Function to return top value of Stcak
   
    int top_value(){
        return arr[top];
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.print_Stack();
   
}
/*
                                             Arbab Hassan 
                                 Department of Information Technology
                                         University of Gujrat
                                        21011556-184@uog.edu.pk


                                        */