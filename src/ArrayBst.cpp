#include <iostream>
#include "arrayBST.h"

using namespace std;

    bool arrayBST::isEmpty(){
        if(Node[1].key == -1){
            return true;
        }
        return false;
    }

    void arrayBST::add(int key, int value){
        if(isEmpty()){
            arrayBST NewBST(key, value, 1);
            return;
        }
        int i = 1;
        if(key == arrayBST::Node[i]->key){
            cout<<"Invalkid key!!! key already already used!"<<endl;
        }
        if(key > arrayNode::Node[i]->key){
            i= 2i+1;
            arrayBST::Node[i]
        }


    }

    void arrayBST::remove(int);
    void arrayBST::max(int &);
    void arrayBST::min(int &);
    bool arrayBST::exists(int);
    void arrayBST::searchBST(int);
