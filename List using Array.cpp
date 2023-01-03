
//This Program Create List Using Array and including different Functions to  Perform different Operations


#include"iostream"
using namespace std;

    // create a class name of List

class List{

    // Define a Array of 100 index & a counter variable
    int counter;
    int arr[100];
    public:

    // create Constructor to initialize value in counter variable
    List(){
        counter=0;

    }

    // Function to Insert Value on First or Top of List

    void Insert_First(int val){
        int temp=counter+1;
        for(int i=0;i<=counter;i++){
            arr[temp]=arr[temp-1];
            temp--;
        }
        arr[0]=val;
        counter++;
    }

        // Function to Insert value at end of current value in list

    void insert_Last(int val){
        arr[counter]=val;
        counter++;
    }

    // Function to delete last value in List

    void delete_Last(){
        counter--;
    }

    // Function to Print the List

        void print_list(){
            for(int i=0;i<counter;i++){
                cout<<arr[i]<<endl;
            }
        }
    
        // Function to Delete Specific Value in List

        void delete_by_value(int val){
          int x;
            for(int i=0;i<counter;i++){
                if(arr[i]==val){
                     x=i;
                }
            }
            x=x+1;
            for(int i=x;i<=counter;i++){
                arr[x-1]=arr[x];
                x++;
            }
            counter--;

        }
};
int main(){
    List a;
    a.insert_Last(10);
    a.insert_Last(20);
    a.insert_Last(30);
    a.insert_Last(40);
    a.Insert_First(500);
    a.delete_by_value(20);
    a.print_list();
}
/*
                                             Arbab Hassan 
                                 Department of Information Technology
                                         University of Gujrat
                                        21011556-184@uog.edu.pk


                                        */