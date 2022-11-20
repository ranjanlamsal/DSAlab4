#ifndef arrayBST_h
#define arrayBST_h
#include "AbstractBST.h"

class arrayNode{
    public:
    int key;
    int value;

    arrayNode(int key = -1, int value = -1){
        key = key;
        value = value;
    }
};
class arrayBST:public AbstractBST{


    public:
    arrayNode Node[__INT_MAX__];
    bool isEmpty();
    void add(int, int);
    void remove(int);
    void max(int &);
    void min(int &);
    bool exists(int);
    void searchBST(int);

    arrayBST(int key, int value, int i = 1){
        Node[i].key = key;
        Node[i].value=value;
    }

};
#endif
