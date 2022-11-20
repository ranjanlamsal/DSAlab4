#include <iostream>
using namespace std;
#include "LinkedlistBST.h"

bool LinkedlistBST:: isEmpty()
{
    if(root == nullptr)
    {
        return true;
    }else {
        return false;
    }
}

void LinkedlistBST:: add(int key,int value)
{
    Node *newNode = new Node(key,value);
    if (isEmpty()){
        root=newNode;
    }else {
        add(root,newNode);
    }
    return;
}

void LinkedlistBST:: add(Node *stree, Node *newNode)
{
    if(stree->val.key > newNode->val.key)
    {
        if(stree->lsubtree != nullptr)
        {
            add(stree->lsubtree, newNode);
        }
        else
        {
            stree->lsubtree = newNode;
        }
    }
    else if(stree->val.key < newNode->val.key)
    {
        if(stree->rsubtree != nullptr)
        {
            add(stree->rsubtree, newNode);
        }
        else
        {
            stree->rsubtree = newNode;
        }
    }
    else if(stree->val.key == newNode->val.key)
    {
        cout << "Key is same" << endl;
    }
}

void LinkedlistBST:: remove(int keytoremove)
{
    Node *temp = root;
    if(temp->val.key == keytoremove){
        Node *temp2 = temp->lsubtree;
        Node *parent2 = temp;
        while(temp2->rsubtree != nullptr){
            parent2 = temp;
            temp2 = temp2->rsubtree;
        }
        parent2->rsubtree = nullptr;
        temp2->lsubtree = temp->lsubtree;
        temp2->rsubtree = temp->rsubtree;
        delete[] temp;
        return;
    
    }
    Node *parent = root;
    while(true){
        if(temp->val.key == keytoremove)
        {
            break;
        }else if(temp->val.key < keytoremove){
            parent = temp;
            temp = temp->rsubtree;
        }else if(temp->val.key > keytoremove){
            parent = temp;
            temp = temp->lsubtree;
        }
        if(temp == nullptr){
            return;
        }
    }
    if(temp->lsubtree == nullptr && temp->rsubtree == nullptr)
    {   
        delete[] temp;
        return;
    }else if(temp->lsubtree == nullptr && temp->rsubtree != nullptr){
        if(parent->lsubtree ==  temp){
            parent->lsubtree = temp->rsubtree;
        }else{
            parent->rsubtree = temp->rsubtree;
        }
        delete[] temp;
        return;
    }else if(temp->lsubtree != nullptr && temp->rsubtree == nullptr){
        if(parent->lsubtree ==  temp){
            parent->lsubtree = temp->lsubtree;
        }else{
            parent->rsubtree = temp->lsubtree;
        }
        delete[] temp;
        return;
    }else{
        Node *temp2 = temp->lsubtree;
        Node *parent2 = temp;
        while(temp2->rsubtree != nullptr){
            parent2 = temp;
            temp2 = temp2->rsubtree;
        }
        parent2->rsubtree = nullptr;
        if(parent->lsubtree ==  temp){
            parent->lsubtree = temp2;
        }else{
            parent->rsubtree = temp2;
        }
        temp2->lsubtree = temp->lsubtree;
        temp2->rsubtree = temp->rsubtree;
        delete[] temp;
        return;
    }
}

void LinkedlistBST:: max(int &output)
{
    Node *temp=root;
    while(temp->rsubtree != nullptr){
        temp = temp->rsubtree;
    }
    output = temp->val.key;
}

void LinkedlistBST:: min(int &output)
{
    Node *temp=root;
    while(temp->lsubtree != nullptr){
        temp = temp->lsubtree;
    }
    output = temp->val.key;
}

bool LinkedlistBST:: exists(int targetkey)
{
    Node *temp = root;
    while(true){
        if(temp->val.key == targetkey)
        {
            return true;
        }else if(temp->val.key < targetkey){
            temp = temp->rsubtree;
        }else if(temp->val.key > targetkey){
            temp = temp->lsubtree;
        }
        if(temp == nullptr){
            break;
        }
    }
    return false;
}


void LinkedlistBST:: inorder()
{
    Node *temp = root;
    if(isEmpty())
    {
        cout<< "It is empty"<<endl;
        return;
    }else{
        inorder(temp);
    }
}

void LinkedlistBST:: inorder(Node *tree)
{
    if(tree != nullptr)
    {
        inorder(tree->lsubtree);
        cout<< tree->val.key << ":" << tree->val.value<<endl;
        inorder(tree->rsubtree);
    }
}