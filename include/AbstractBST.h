#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST{
    public:
    virtual bool isEmpty() = 0;
    virtual void add(int key, int value) = 0;
    virtual void remove(int key) = 0;
    virtual void max(int &output)= 0;
    virtual void min(int &output)= 0;
    virtual 
}