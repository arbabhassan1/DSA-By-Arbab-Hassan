#include"iostream"
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* previous;
};
class Dobuly_Link_List{

    Node* head;
    // Node* previous;

    public:
    
    // Create Constructor of Class

    Dobuly_Link_List(){
        head=NULL;
       
    }

    // Function to Insert the value in List


    void Insert(int val){
        Node* n=new Node();
        n->data=val;
        n->next=NULL;

        if(head==NULL){
            head=n;
            n->previous=NULL;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n;
            n->previous=temp;
            
        }
    }


    // Function to Delete the last Node 

    void delete_Last(){
        Node* ptr=head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        Node* temp=ptr->next;
        ptr->next=NULL;
        delete(temp);

    }


    // Function to Print the List

    void print(){
        Node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }

    }

    // Function to check weather the List is empty

    bool empty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }


};
int main()
{
    Dobuly_Link_List a;
    a.Insert(10);
    a.Insert(20);
    a.Insert(30);
    a.Insert(40);
    a.delete_Last();
    a.print();
    cout<<endl;
}
/*
                                             Arbab Hassan 
                                 Department of Information Technology
                                         University of Gujrat
                                        21011556-184@uog.edu.pk


                                        */