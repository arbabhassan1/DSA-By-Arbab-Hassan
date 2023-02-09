#include "iostream"
using namespace std;

//  Create Structure of node
struct Node
{
    int data;
    Node *left;
    Node *right;
};
class BST
{
    Node *root;
    Node *parent;

public:
    BST()
    {
        root == NULL;
    }

    // Function to insert Values in BST

    void Insert(int val)
    {
        Node *n = new Node();
        n->data = val;
        n->left = NULL;
        n->right = NULL;
        if (root == NULL)
        {
            root = n;
        }
        else
        {
            Node *ptr = root;
            while (ptr != NULL)
            {
                parent = ptr;
                if (n->data < ptr->data)
                {
                    ptr = ptr->left;
                }
                else
                {
                    ptr = ptr->right;
                }
            }
            if (n->data <= parent->data)
            {
                parent->left = n;
            }
            else if (n->data >= parent->data)
            {
                parent->right = n;
            }
        }
    }

    // Function to return Root Node in BST

    Node *root_Node()
    {
        return root;
    }

    // Function to Print BST in IN_Order Traversal

    void IN_ORDER(Node *root)
    {
        if (root != NULL)
        {
            IN_ORDER(root->left);
            cout << root->data << " , ";
            IN_ORDER(root->right);
        }
    }

    // Function to Print BST in PRE_ORDER Traversal

    void PRE_ORDER(Node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " , ";
            PRE_ORDER(root->left);
            PRE_ORDER(root->right);
        }
    }

    // Function to Print BST in POST_Order Traversal

    void POST_ORDER(Node *root)
    {
        if (root != NULL)
        {
            POST_ORDER(root->left);
            POST_ORDER(root->right);
            cout << root->data << " , ";
        }
    }

    // Function to Search Value in BST

    bool Search(Node *root, int key)
    {
        if (root == NULL)
        {
            return false;
        }
        else if (key == root->data)
        {
            return true;
        }
        else
        {
            if (key < root->data)
            {
                return Search(root->left, key);
            }
            else
            {
                return Search(root->right, key);
            }
        }
    }

    // Function to Return Maximum Value in BST

    int Maximum(Node *root)
    {
        while (root->right != NULL)
        {
            root = root->right;
        }
        return root->data;
    }

    // Function to Return Minimum Value in BST

    int Minimum(Node *root)
    {
        while (root->left != NULL)
        {
            root = root->left;
        }
        return root->data;
    }

    /* Function to Delete the Node in BST
    Deletion types:
    1- NO Child
    2- One Child
    3- Two Child
    */

    Node *Deletion(Node *root, int key)
    {
        if (key < root->data)
        {
            root->left = Deletion(root->left, key);
        }
        else if (key > root->data)
        {
            root->right = Deletion(root->right, key);
        }
        else
        {
            if (root->left == NULL)
            {
                Node *temp = root->right;
                delete (root);
                return temp;
            }
            else if (root->right == NULL)
            {
                Node *temp = root->left;
                delete (root);
                return temp;
            }

            // Deal with case 3

            Node *temp = successor(root->right);
            root->data = temp->data;
            root->right = Deletion(root->right, temp->data);
        }
        return root;
    }

    // FUNCTION TO RETURN THE SUCCESSOR OF GIVEN NODE

    Node *successor(Node *root)
    {
        Node *curr = root;
        while (curr && curr->left != NULL)
        {
            curr = curr->left;
        }
        return curr;
    }
};
int main()
{
    BST a;
    a.Insert(3);
    a.Insert(9);
    a.Insert(12);
    a.Insert(60);
    a.Insert(90);
    a.Insert(81);
    a.Insert(32);
    a.Insert(4);
    Node *root = a.root_Node();
    a.IN_ORDER(root);
    cout << endl;
    a.PRE_ORDER(root);
    cout << endl;
    a.POST_ORDER(root);

    if (a.Search(root, 12) == true)
    {
        cout << "\nFound in BST\n";
    }
    else
    {
        cout << "\nNOt Found in BST\n";
    }

    cout << a.Minimum(root) << " is Maximum in BST\n";
    cout << a.Minimum(root) << " is Minimum in BST\n";

    cout << "\n IN ORder Before Deletion\n";
    a.IN_ORDER(root);
    root = a.Deletion(root, 12);

    cout << "\n In Order After Deletion\n";
    a.IN_ORDER(root);
}
/*
                          Arbab Hassan
               Department of Information Technology
                     University of Gujrat
                    21011556-184@uog.edu.pk
*/