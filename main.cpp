#include <iostream>
#include "LinkedlistBST.cpp"
using namespace std;

int main() 
{
    LinkedlistBST b;
    int data;
    cout << ".....LinkedList Binary Search Tree ....."<<endl;
    cout<<"Checking if BST is empty or not"<<endl;
    if(b.isEmpty())
    {
        cout<<"The tree is empty"<<endl;
    }else
    {
        cout<<"The tree is not empty"<<endl;
    }
    
    cout<<"Inserting an element to the BST"<<endl;
    b.add(3,4);
    b.add(6,5);
    b.add(1,8);
    b.add(7,4);
    b.max(data);
    cout<<"The maxium key is: "<<data<<endl;
    b.min(data);
    cout<<"The minimum key is: "<<data<<endl;
    cout<<"Displaying the TREE"<<endl;
    b.inorder();
    cout<<"Searching if the key exists in the tree"<<endl;
    if(b.exists(1))
    {
        cout<<"The key exists."<<endl;
    }else{
        cout<<"The key doesn't exists."<<endl;
    }

    cout<<"Removing an element in the BST"<<endl;
    b.remove(7);
    b.inorder();
}