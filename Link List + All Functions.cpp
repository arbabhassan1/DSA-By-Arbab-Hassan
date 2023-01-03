// This Program is created using Link List and including All Functions that performs different operations.
#include"iostream"
using namespace std;

// create a Struct name of Node

struct Node{
    int data;
    Node* next;
};

    // Creat class name of List

class List{
    Node* head;
    int count;

    public:

    // create a constructor

    List(){
        head=NULL;
        count=0;
    }

    // Function to add value at last node
    void insert_last(int val){
        Node* n=new Node();
        n->data=val;
        n->next=NULL;
        count++;
        if(head==NULL){
            head=n;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n;
        }

    }

// Function to Add value in First Node
    void insert_First(int val){
        Node* n=new Node();
        n->data=val;
        n->next=head;
        head=n;
        count++;
        
    }
// Function to delete last NOde
    void delete_Last(){
        Node* ptr=head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        Node* temp=ptr->next;
        ptr->next=NULL;
        delete(temp);
        count--;
    }
// Function to delete First Node
    void delete_First(){
        Node* temp=head;
        head=head->next;
        delete(temp);
        count--;
    }
// Function to search any value in List
    void search(int val){
        Node* ptr=head;
        bool flag=false;
        while(ptr!=NULL){
            if(ptr->data==val){
                flag=true;
            }
            ptr=ptr->next;
            
        }
        if(flag==true){
                cout<<val<<" found in List\n";

            }
            else {
                cout<<val<<" not found in List\n";
            }
    }

    // Function to Print Values of All Nodes
    void Print_List(){
        Node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
// Function to check weather the List is Empty
        bool is_empty(){
            if(head==NULL){
                return true;
            }
            else{
                return false;
            }
        }
    // Function to Insert Node in Middle 
        void insert_Middle(int val){
            Node* n=new Node();
            int cunt;
            n->data=val;
            if(count%2==0){
                cunt=count/2;
            }
            else{
                cunt=(count+1)/2;
            }
            Node* temp=head;
            for(int i=1;i<cunt;i++){
                temp=temp->next;
            }
            n->next=temp->next;
            temp->next=n;
            count++;
        }
// Function to Delete Node by Value
        void delete_by_value(int val){
            Node* ptr=head;
            while(ptr->next->data!=val){
                ptr=ptr->next;
            }
            Node* temp=ptr->next;
            ptr->next=ptr->next->next;
            delete(temp);
            count--;

        }

};
int main(){
    List a;
    a.insert_last(20);
    a.insert_last(30);
    a.insert_last(40);
    a.insert_First(10);
    a.insert_Middle(500);
    a.delete_by_value(20);
    a.Print_List();
    }
    /*
                                                 Arbab Hassan 
                                     Department of Information Technology
                                             University of Gujrat
                                            21011556-184@uog.edu.pk
    
    
                                            */