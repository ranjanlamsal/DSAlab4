#include "AbstractBST.h"
#include <iostream>
using namespace std;

class arrayBST : virtual public AbstractBST{
    public:
    int* BST;
    int size;
    arrayBST(int data){
        int n=data;
        size=n+1;
        BST = new int[size];
        for (int i = 0; i <= size; i++){
            BST[i]=0;
        }
    };
    bool isEmpty();
    void add(int key, int value);
    void remove(int value);
    bool exists(int value);
    void min(int&){};
    void max(int&){};
    void inorder(){};

};