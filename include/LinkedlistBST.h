#ifndef LinkedlistBST_h
#define LinkedlistBST_h
#include "AbstractBST.h"

class Data
{
    public:
    int key;
    int value;
};

class Node{
    public:
    Node *lsubtree;
    Node *rsubtree;
    Data val;
    Node(int key=0, int value=0)
    {
        this->val.key=key;
        this->val.value=value;
        this->lsubtree=nullptr;
        this->rsubtree=nullptr;
    }
};

class LinkedlistBST: public AbstractBST
{
    public:
    Node *root;
    LinkedlistBST()
    {
        this->root=nullptr;
    }
    bool isEmpty();
    void add(int key, int value);
    void add(Node* subTree, Node* newNode);
    void remove(int keytoremove);
    void max(int &output);
    void min(int &output);
    void inorder();
    void inorder(Node* Tree);
    bool exists(int targetkey);
};

#endif